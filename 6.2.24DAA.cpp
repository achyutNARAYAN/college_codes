#include <iostream>
#include <ctime>
#include <chrono>

#ifdef _WIN32
#include <windows.h>
#else
#include <thread>
#endif

using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 100;
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    clock_t start_time = clock(); // Start the clock

#ifdef _WIN32
    Sleep(10); 
#else
    this_thread::sleep_for(chrono::seconds(15)); 
#endif

    int result = linearSearch(arr, size, target);

    clock_t end_time = clock(); // Stop the clock

    if (result != -1) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found" << endl;
    }

    double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC;
    cout << "Elapsed time: " << elapsed_time << " seconds" << endl;

    return 0;
}
