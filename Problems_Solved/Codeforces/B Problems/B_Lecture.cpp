#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    string a, b;

    unordered_map<string, string> refTable;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        cin >> b;
        refTable[a] = b;
        refTable[b] = a;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cout << (a.length() <= refTable[a].length() ? a : refTable[a]) << " ";
    }

    return 0;
}