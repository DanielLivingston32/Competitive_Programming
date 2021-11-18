#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;
    string input;
    cin >> input;
    while (t--)
    {
        for (int i = 0; i < input.length() - 1; i++)
        {
            if (input[i] == 'B' and input[i + 1] == 'G')
            {
                swap(input[i], input[i + 1]);
                i++;
            }
        }
     }
    cout << input;

    return 0;
}
