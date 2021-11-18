// Bankers
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cout << "Enter the no of processes: ";
    cin >> n;
    cout << "Enter the no of resources: ";
    cin >> m;

    int max[n][m];
    int alloc[n][m];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for P" << i << endl;
        cout << "Enter Allocation: ";
        for (int j = 0; j < m; j++)
        {
            cin >> alloc[i][j];
        }
        cout << "Enter Max: ";
        for (int j = 0; j < m; j++)
        {
            cin >> max[i][j];
        }
        cout << endl;
    }

    int avail[m];
    cout << "Enter Available Resources: ";
    for (int i = 0; i < m; i++)
    {
        cin >> avail[i];
    }

    int need[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
    }

    // Store states
    bool flag[n] = {false};

    int safeSeq[n];

    int count = 0;
    while (count < n)
    {
        bool found = false;
        for (int p = 0; p < n; p++)
        {
            if (!flag[p])
            {
                int j;
                for (j = 0; j < m; j++)
                    if (need[p][j] > avail[j])
                        break;

                if (j == m)
                {
                    cout << "P" << p << " is visited (";
                    for (int k = 0; k < m; k++)
                    {
                        avail[k] += alloc[p][k];
                        cout << max[p][k] << " ";
                    }
                    cout << ")" << endl;

                    safeSeq[count++] = p;

                    flag[p] = 1;

                    found = true;
                }
            }
        }

        if (found == false)
        {
            cout << "SYSTEM IS NOT IN SAFE STATE";
            return false;
        }
    }

    cout << "SYSTEM IS IN SAFE STATE\nThe safe sequence is -- (";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << safeSeq[i] << " ";
    }
    cout << ")" << endl;

    cout << "Process\tAllocation\tMax\tNeed" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "P" << i << "     \t";
        for (int j = 0; j < m; j++)
        {
            cout << alloc[i][j] << " ";
        }
        cout << "     \t";
        for (int j = 0; j < m; j++)
        {
            cout << max[i][j] << " ";
        }
        cout << "\t";
        for (int j = 0; j < m; j++)
        {
            cout << need[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 5
// 3
// 0 1 0
// 7 5 3
// 2 0 0
// 3 2 2
// 3 0 2
// 9 0 2
// 2 1 1
// 2 2 2
// 0 0 2
// 4 3 3

// 3 3 2
