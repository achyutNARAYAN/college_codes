#include <iostream>
#include <vector>
using namespace std;
pair<int, int> findMinMax(vector<int>& arr, int left, int right) {
    if (left == right)
    return {arr[left], arr[left]}; // best case hoga jab ek no. hoga bss.
    int mid = left + (right - left) / 2;
    auto leftMinMax = findMinMax(arr, left, mid);
    auto rightMinMax = findMinMax(arr, mid + 1, right);
    int minVal = min(leftMinMax.first, rightMinMax.first);
    int maxVal = max(leftMinMax.second, rightMinMax.second);
    return {minVal, maxVal};
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    }
    pair<int, int> minMax = findMinMax(arr, 0, n - 1);
    cout << "Minimum number in the array: " << minMax.first << endl;
    cout << "Maximum number in the array: " << minMax.second << endl;
    return 0;
}