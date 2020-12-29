#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;

    sort(input.begin(), input.end());

    cout << input << endl;
    while (next_permutation(input.begin(), input.end()))
    {
        cout << input << endl;
    }

    return 0;
}