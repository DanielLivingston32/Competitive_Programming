#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int arr[10];
    while (t--)
    {
        int n;
        cin >> n;
        int mul = 1, idx = 0;
        while (n)
        {
            if (n % 10)
            {
                arr[idx] = (n % 10) * mul;
                idx++;
                mul *= 10;
            }
            n /= 10;
        }
        cout << idx << endl;
        for (int i = 0; i < idx; i++)
        {
            cout << arr[idx] << endl;
        }
    }

    return 0;
}