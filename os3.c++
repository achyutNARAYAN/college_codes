#include <iostream>
using namespace std;
void findavgTime(int processes[], int n, int bt[]) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    wt[0] = 0;
    for (int i = 1; i < n; i++)
    wt[i] = bt[i - 1] + wt[i - 1];
    for (int i = 0; i < n; i++)
    tat[i] = bt[i] + wt[i];
    cout << "Processes\tBurst time\tWaiting time\tTurnaround time\n";
    for (int i = 0; i < n; i++) {
    total_wt += wt[i];
    total_tat += tat[i];
    cout << " " << processes[i] << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << endl;
    }
    cout << "Average waiting time = " << (float)total_wt / (float)n << endl;
    cout << "Average turnaround time = " << (float)total_tat / (float)n << endl;
}
int main() {
    int processes[] = {1, 2, 3};
    int n = sizeof processes / sizeof processes[0];
    int burst_time[] = {10, 5, 8};
    findavgTime(processes, n, burst_time);
    return 0;
}