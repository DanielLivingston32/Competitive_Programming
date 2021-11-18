#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int j = n - i;

        while (j > 0)
        {
            cout << "  ";
            j--;
        }

        while (j < i)
            cout << j++ << " ";
        j = i;
        while (j > 0)
            cout << j-- << " ";
        cout << j << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int j = n - i;

        while (j > 0)
        {
            cout << "  ";
            j--;
        }

        while (j < i)
            cout << j++ << " ";
        j = i;
        while (j > 0)
            cout << j-- << " ";
        cout << j << endl;
    }

    return 0;
}