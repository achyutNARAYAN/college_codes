#include<iostream> 
using namespace std;
void findWaitingTime(int n, int bt[], int wt[], int quantum) 
{ 
    int rem_bt[n], t = 0;
    for (int i = 0 ; i < n ; i++) 
        rem_bt[i] = bt[i]; 
    while (true) 
    { 
        bool done = true;
        for (int i = 0 ; i < n; i++) 
        {
            if (rem_bt[i] > 0) 
            { 
                done = false; 
                if (rem_bt[i] > quantum) 
                {
                t += quantum;
                rem_bt[i] -= quantum; 
                }
                else
                {
                t += rem_bt[i]; 
                wt[i] = t - bt[i]; 
                rem_bt[i] = 0; 
                } 
            } 
        } 
        if (done) break; 
    } 
} 
void findTurnAroundTime(int n, int bt[], int wt[], int tat[]) 
{ 
    for (int i = 0; i < n ; i++) 
     tat[i] = bt[i] + wt[i]; 
}
void findavgTime(int n, int bt[], int quantum) 
{ 
    int wt[n] = {0}, tat[n] = {0}, total_wt = 0, total_tat = 0; 
    findWaitingTime(n, bt, wt, quantum);  
    findTurnAroundTime(n, bt, wt, tat); 
    cout << "PN\t " << " \tBT " << " \tWT " << "\tTAT\n"; 
    for (int i = 0; i < n; i++) 
    { 
        total_wt += wt[i]; 
        total_tat += tat[i]; 
        cout << " " << i + 1 << "\t\t" << bt[i] <<"\t " << wt[i] <<"\t\t " << tat[i] <<endl; 
    } 
    cout << "Average waiting time = " << (float)total_wt / n; 
    cout << "\nAverage turn around time = " << (float)total_tat / n; 
} 
int main() 
{ 
    int n = 3; 
    int burst_time[] = {10, 5, 8}; 
    int quantum = 2; 
    findavgTime(n, burst_time, quantum); 
    return 0; 
}