#include <iostream>
#include <vector>
using namespace std;
bool isSafe(const vector<vector<int>>& allocation, const vector<vector<int>>& max, const vector<int>& available) {
    int processes = allocation.size();
    int resources = available.size();
    vector<int> work = available;
    vector<bool> finish(processes, false);
    int count = 0;
    while (count < processes) {
        bool found = false;
        for (int i = 0; i < processes; ++i) {
            if (!finish[i]) {
                bool canAllocate = true;
                for (int j = 0; j < resources; ++j) {
                    if (max[i][j] - allocation[i][j] > work[j]) {
                        canAllocate = false;
                        break;
                    }
                }
                if (canAllocate) {
                    for (int j = 0; j < resources; ++j)
                        work[j] += allocation[i][j];
                    finish[i] = true;
                    ++count;
                    found = true;
                }
            }
        }
        if (!found) // Deadlock hoga 
        return false;
    }
    return true;
}
int main() {
    int processes, resources;
    cout << "Enter the number of processes: ";
    cin >> processes;
    cout << "Enter the number of resources: ";
    cin >> resources;
    vector<vector<int>> allocation(processes, vector<int>(resources));
    vector<vector<int>> max(processes, vector<int>(resources));
    vector<int> available(resources);
    cout << "Enter the allocation matrix:" << endl;
    for (int i = 0; i < processes; ++i)
    for (int j = 0; j < resources; ++j)
    cin >> allocation[i][j];
    cout << "Enter the maximum matrix:" << endl;
    for (int i = 0; i < processes; ++i)
    for (int j = 0; j < resources; ++j)
    cin >> max[i][j];
    cout << "Enter the available resources:" << endl;
    for (int j = 0; j < resources; ++j)
    cin >> available[j];
    if (isSafe(allocation, max, available))
    cout << "The system is in a safe state." << endl;
    else
    cout << "The system is in an unsafe state (potential deadlock detected)." << endl;
    return 0;
}