#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    int BT[100], WT[100], TAT[100];
    float avg_wt = 0, avg_tat = 0;
    cout << "Enter Burst Time for each process:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "P" << i + 1 << ": ";
        cin >> BT[i];
    }
    WT[0] = 0;
    for (int i = 1; i < n; ++i) {
        WT[i] = 0;
        for (int j = 0; j < i; ++j)
        WT[i] += BT[j];
    }
    cout << "Process\tBT\tWT\tTAT" << endl;
    for (int i = 0; i < n; ++i) {
        TAT[i] = BT[i] + WT[i];
        avg_wt += WT[i];
        avg_tat += TAT[i];
        cout << "P" << i + 1 << "\t" << BT[i] << "\t" << WT[i] << "\t" << TAT[i] << endl;
    } 
    avg_wt /= n;
    avg_tat /= n;
    cout << "Average Waiting Time= " << avg_wt << endl;
    cout << "Average Turnaround Time= " << avg_tat << endl; 
    return 0;
}