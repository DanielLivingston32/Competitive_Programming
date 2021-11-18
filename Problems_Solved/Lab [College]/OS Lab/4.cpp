// FCFS

#include <bits/stdc++.h>
using namespace std;

void findWaitingTime(int processes[], int n, int bt[], int wt[])
{

    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = bt[i - 1] + wt[i - 1];
}

void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

void findavgTime(int processes[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    findWaitingTime(processes, n, bt, wt);
    findTurnAroundTime(processes, n, bt, wt, tat);

    cout << "Processes  "
         << " Burst time  "
         << " Waiting time  "
         << " Turn around time\n";

    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "   " << i + 1 << "\t\t" << bt[i] << "\t    "
             << wt[i] << "\t\t  " << tat[i] << endl;
    }

    cout << "Average waiting time = " << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}

int main()
{
    int processes[10];
    int burst_time[10];
    int n;
    cout << "Enter the no of processes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Burst Time for process " << i << ": ";
        processes[i] = i;
        cin >> burst_time[i];
    }
    findavgTime(processes, n, burst_time);
    return 0;
}

// 3
// 10
// 5
// 8

// SJF

#include <bits/stdc++.h>
using namespace std;
struct Process
{
    int pid;
    int bt;
    int art;
};
void findTurnAroundTime(Process proc[], int n, int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
        tat[i] = proc[i].bt + wt[i];
}

void findWaitingTime(Process proc[], int n, int wt[])
{
    int rt[n];
    for (int i = 0; i < n; i++)
        rt[i] = proc[i].bt;
    int complete = 0, t = 0, minm = INT_MAX;
    int shortest = 0, finish_time;
    bool check = false;
    while (complete != n)
    {
        for (int j = 0; j < n; j++)
        {
            if ((proc[j].art <= t) && (rt[j] < minm) && rt[j] > 0)
            {
                minm = rt[j];
                shortest = j;
                check = true;
            }
        }
        if (check == false)
        {
            t++;
            continue;
        }

        rt[shortest]--;
        minm = rt[shortest];
        if (minm == 0)
            minm = INT_MAX;

        if (rt[shortest] == 0)
        {
            complete++;
            check = false;
            finish_time = t + 1;

            wt[shortest] = finish_time -
                           proc[shortest].bt -
                           proc[shortest].art;
            if (wt[shortest] < 0)
                wt[shortest] = 0;
        }

        t++;
    }
}

void findavgTime(Process proc[], int n)
{
    int wt[n], tat[n], total_wt = 0,
                       total_tat = 0;

    findWaitingTime(proc, n, wt);

    findTurnAroundTime(proc, n, wt, tat);
    cout << "Processes "
         << " Burst time "
         << " Waiting time "
         << " Turn around time\n";
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << proc[i].pid << "\t\t" << proc[i].bt << "\t\t " << wt[i] << "\t\t " << tat[i] << endl;
    }
    cout << "\nAverage waiting time = " << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}

int main()
{
    Process pro[10];
    int n;
    cout << "Enter the no of processes: ";
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        pro[i].pid = i + 1;
        cout << "Enter the Burst Time for process " << i + 1 << ": ";
        cin >> temp;
        pro[i].bt = temp;
        cout << "Enter the Arrival Time for process " << i + 1 << ": ";
        cin >> temp;
        pro[i].art = temp;
    }
    findavgTime(pro, n);
    return 0;
}

// 4
// 5
// 1
// 3
// 1
// 6
// 2
// 5
// 3

// Round Robin

#include <bits/stdc++.h>
using namespace std;

void findWaitingTime(int processes[], int n, int bt[], int wt[], int quantum)
{
    int rem_bt[n];
    for (int i = 0; i < n; i++)
        rem_bt[i] = bt[i];

    int t = 0;
    while (1)
    {
        bool done = true;
        for (int i = 0; i < n; i++)
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
                    t = t + rem_bt[i];
                    wt[i] = t - bt[i];
                    rem_bt[i] = 0;
                }
            }
        }
        if (done == true)
            break;
    }
}

void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

void findavgTime(int processes[], int n, int bt[], int quantum)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    findWaitingTime(processes, n, bt, wt, quantum);
    findTurnAroundTime(processes, n, bt, wt, tat);
    cout << "Processes "
         << " Burst time "
         << " Waiting time "
         << " Turn around time\n";

    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << i + 1 << "\t\t" << bt[i] << "\t " << wt[i] << "\t\t " << tat[i] << endl;
    }

    cout << "Average waiting time = " << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}

int main()
{
    int processes[10];
    int burst_time[10];
    int n;
    cout << "Enter the no of processes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Burst Time for process " << i << ": ";
        processes[i] = i;
        cin >> burst_time[i];
    }
    int quantum;
    cout << "Enter the quantum value: ";
    cin >> quantum;

    findavgTime(processes, n, burst_time, quantum);
    return 0;
}

// 3
// 10
// 5
// 8

// Priority

#include <bits/stdc++.h>
using namespace std;
struct Process
{
    int pid;
    int bt;
    int priority;
};

bool compare(Process a, Process b)
{
    return (a.priority < b.priority);
}

void waitingtime(Process pro[], int n, int wt[])
{
    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = pro[i - 1].bt + wt[i - 1];
}

void turnarround(Process pro[], int n, int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
        tat[i] = pro[i].bt + wt[i];
}

void avgtime(Process pro[], int n)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    waitingtime(pro, n, wt);
    turnarround(pro, n, wt, tat);
    cout << "\nProcesses "
         << " Burst time "
         << " Waiting time "
         << " Turn around time\n";

    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << pro[i].pid << "\t\t" << pro[i].bt << "\t " << wt[i] << "\t\t " << tat[i] << endl;
    }
    cout << "\nAverage waiting time = " << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}
void scheduling(Process pro[], int n)
{
    sort(pro, pro + n, compare);
    cout << "Order in which processes gets executed \n";
    for (int i = 0; i < n; i++)
        cout << pro[i].pid << " ";
    avgtime(pro, n);
}

int main()
{
    Process pro[10];
    int n;
    cout << "Enter the no of processes: ";
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        pro[i].pid = i + 1;
        cout << "Enter the Burst Time for process " << i + 1 << ": ";
        cin >> temp;
        pro[i].bt = temp;
        cout << "Enter the priority for process " << i + 1 << ": ";
        cin >> temp;
        pro[i].priority = temp;
    }
    scheduling(pro, n);
    return 0;
}

// 3
// 12
// 3
// 10
// 2
// 4
// 1
