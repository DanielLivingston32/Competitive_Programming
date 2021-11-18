#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find decreasing position
    int l = 0;
    int r = 0;
    int cnt = 0;
    int i = 0;

    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            if (i == 0 or arr[i - 1] < arr[i])
            {
                l = i;
                r = i;
                cnt++;
            }
            else
            {
                r = i;
            }
        }
        if (i != 0 and arr[i - 1] > arr[i])
        {
            r = i;
        }
    }
    if (arr[i] < arr[i - 1])
    {
        r = i;
    }
    if (cnt > 1)
    {
        cout << "no";
    }
    else
    {
        // Check if the lth element is lesser than the r+1th element and the rth element is greater than the l-1th element.
        // If this is true then the resultant array will be sorted.
        if ((r == n - 1 or arr[l] < arr[r + 1]) and (l == 0 or arr[r] > arr[l - 1]))
        {
            cout << "yes" << endl;
            cout << l + 1 << " " << r + 1;
        }
        else
        {
            cout << "no";
        }
    }
    return 0;
}