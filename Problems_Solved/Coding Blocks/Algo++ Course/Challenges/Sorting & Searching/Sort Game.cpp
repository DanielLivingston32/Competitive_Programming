#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

bool comparator(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int x;
    cin >> x;
    int n;
    cin >> n;
    string temp;
    int temp_value;
    vector<pair<string, int>> list;
    while (n--)
    {
        cin >> temp;
        cin >> temp_value;
        if (temp_value >= x)
        {
            list.push_back(make_pair(temp, temp_value));
        }
    }
    sort(list.begin(), list.end(), comparator);
    for (auto i : list)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}