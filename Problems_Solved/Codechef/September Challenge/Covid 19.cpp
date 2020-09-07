#include <iostream>
#include <map>
#include <climits>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        cin >> n;
        map<int, int> hashmap;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            hashmap[i + temp]++;
        }
        int mini = INT_MAX;
        int maxi = 1;
        for (auto i : hashmap)
        {
            mini = min(i.second, mini);
            maxi = max(i.second, maxi);
        }
        cout << mini << " " << maxi << endl;
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), count(n, 1);
    input(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                count[i] += 1;
        }
        for (int j = 0; j < i; j++)
            if (a[j] > a[i])
                count[i] += 1;
    }
    printf("%d %d\n", minelem(count), maxelem(count));
}
int main()
{
    IOS int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}