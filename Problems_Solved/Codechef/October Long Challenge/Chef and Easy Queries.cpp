#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        long int k;
        cin >> n >> k;
        long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0;
        int day = 1;
        bool print = true;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum < k)
            {
                print = false;
                cout << day << endl;
                break;
            }
            else
            {
                sum -= k;
                day++;
            }
        }
        if (print)
        {
            cout << day + (sum / k) << endl;
        }
    }

    return 0;
}