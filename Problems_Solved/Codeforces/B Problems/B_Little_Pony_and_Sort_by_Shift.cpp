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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int changeIdx;
    int changeCnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            changeIdx = i;
            changeCnt++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        changeIdx = n - 1;
        changeCnt++;
    }
    if (changeCnt == 0)
    {
        cout << 0;
    }
    else if (changeCnt > 1)
    {
        cout << -1;
    }
    else
    {
        cout << n - 1 - changeIdx;
    }

    return 0;
}
