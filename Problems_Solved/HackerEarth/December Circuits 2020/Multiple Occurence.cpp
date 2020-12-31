#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, pair<int, int>> arr;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (arr.find(temp) != arr.end())
            {
                arr[temp].second = i;
            }
            else
            {
                arr[temp] = make_pair(i, 0);
            }
        }
        int sum = 0;
        for (auto i : arr)
        {
            if (i.second.second == 0)
            {
                continue;
            }
            else
            {
                sum += i.second.second - i.second.first;
            }
        }

        cout << endl;
    }

    return 0;
}