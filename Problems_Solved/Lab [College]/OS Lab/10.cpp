#include <iostream>
#include <bits/stdc++.h>
// #include<cmath>
using namespace std;
void FCFS()
{
    int n, headS, stime = 0;
    cout << "\nEnter the number of tracks:";
    cin >> n;
    int queElem[n];
    cout << "\nEnter the queue :";
    for (int i = 0; i < n; i++)
    {
        cin >> queElem[i];
    }
    cout << "\nHead start at :";
    cin >> headS;

    stime = abs(headS - queElem[0]);
    cout << "\nHead difference :";
    cout << "\n"
         << stime;
    for (int i = 1; i < n; i++)
    {
        cout << "\n"
             << abs(queElem[i - 1] - queElem[i]);
        stime = stime + abs(queElem[i - 1] - queElem[i]);
    }

    cout << "\nTotal head movements : " << stime;
}

// ****SSTF*******
void SSTF()
{
    const int N = 100005;
    int n;
    int hStart;
    int done[N];
    int queElem[N];
    int move;
    int shortest;
    int index;
    cout << "\nEnter the number of tracks:";
    cin >> n;
    cout << "\nEnter the queue :";
    for (int i = 0; i < n; i++)
        cin >> queElem[i];
    cout << "\nHead start at :";
    cin >> hStart;
    move = 0;
    cout << "\nHead difference :";
    for (int i = 0; i < n; i++)
    {
        index = 0;
        shortest = INT_MAX;
        for (int k = 0; k < n; k++)
        {
            if (abs(hStart - queElem[k]) < shortest && !done[k])
            {
                index = k;
                shortest = abs(hStart - queElem[k]);
            }
        }
        cout << "\n"
             << shortest;
        done[index] = true;
        move += shortest;
        hStart = queElem[index];
    }
    cout << "\nTotal head movements : " << move;
}

int main()
{
    int ch;
    do
    {
        cout << "\n1:FCFS\n2:SSTF\n3:Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            FCFS();
            break;
        case 2:
            SSTF();
            break;
        case 3:
            cout << "\nExiting";
            break;
        default:
            cout << "\nInvalid choice";
            break;
        }
    } while (ch != 3);
}

// Enter the number of tracks: 8
// Enter the queue: 98 183 37 122 14 124 65 67
// Head starts at: 53
