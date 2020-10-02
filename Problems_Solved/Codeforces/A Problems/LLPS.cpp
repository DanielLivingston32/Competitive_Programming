#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    int max_idx = 0, cnt = 1;
    cin >> a;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[max_idx] < a[i])
        {
            max_idx = i;
            cnt = 1;
        }
        else if (a[max_idx] == a[i])
        {
            cnt++;
        }
    }
    while (cnt--)
    {
        cout << a[max_idx];
    }
    return 0;
}
