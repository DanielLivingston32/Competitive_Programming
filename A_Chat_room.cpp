#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;
    string check = "hello";
    bool possible = false;
    int i = 0;

    for (int j = 0; j < input.size(); j++)
    {
        if (input[j] == check[i])
        {
            i++;
        }
        if (i == check.size())
        {
            possible = true;
            break;
        }
    }

    if (possible)
        cout
            << "YES";
    else
        cout << "NO";
    return 0;
}