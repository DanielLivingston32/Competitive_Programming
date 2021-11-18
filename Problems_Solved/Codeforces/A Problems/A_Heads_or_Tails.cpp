#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, y, a, b;
    cin >> x >> y >> a >> b;

    vector<pair<int, int>> res;

    for (int i = b; i <= y; i++)
    {
        for (int j = max(i + 1, a); j <= x; j++)
        {
            res.push_back(make_pair(j, i));
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i].first << " " << res[i].second << endl;
    }

    return 0;
}