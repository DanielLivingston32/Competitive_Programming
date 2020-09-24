#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, temp;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int y_pos = -1;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == '1')
            {
                y_pos = i;
                break;
            }
        }
        int x_pos = y_pos;
        for (int i = y_pos; i < a.size(); i++)
        {
            if (a[i] == '1')
            {
                x_pos = i;
                break;
            }
        }
        cout << x_pos - y_pos << endl;
    }

    return 0;
}