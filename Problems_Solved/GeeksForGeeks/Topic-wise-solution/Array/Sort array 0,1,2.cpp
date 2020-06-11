// Time Complexity: O(N) & Space Complexity:O(1)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void sort012(int[], int);

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

// Logic was to just count the no of occurences store it in a vector and modify the original array with the count occurences...

void sort012(int a[], int n)
{
    vector<int> cnt(3, 0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cnt[0]++;
        }
        else if (a[i] == 1)
        {
            cnt[1]++;
        }
        else
        {
            cnt[2]++;
        }
    }
    int idx = 0;
    int no = 0;
    for (auto i : cnt)
    {
        while (i > 0)
        {
            a[idx] = no;
            i--;
            idx++;
        }
        no++;
    }
}