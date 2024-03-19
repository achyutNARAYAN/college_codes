#include <iostream>
#include <vector>
#include <chrono> // For timing
#include <algorithm> // For std::find
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value to search: ";
    cin >> target;

    auto start = high_resolution_clock::now(); // Start timing
    auto it = find(arr.begin(), arr.end(), target);
    auto stop = high_resolution_clock::now(); // Stop timing
    
    auto duration = duration_cast<microseconds>(stop - start); // Calculate duration
    
    if (it != arr.end()) {
        cout << "Target found at index: " << distance(arr.begin(), it) << endl;
    } else {
        cout << "Target not found" << endl;
    }
    
    cout << "Time taken for linear search: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
