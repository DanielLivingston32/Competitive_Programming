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

    int max_so_far = 0;
    int current = 0;
    bool dangerous = false;
    int val;
    for (int i = 0; i < input.size(); i++)
    {
        val = input[i] - '0';
        if (val == current)
        {
            max_so_far++;
        }
        else
        {
            current = val;
            max_so_far = 1;
        }
        if (max_so_far == 7)
        {
            dangerous = true;
            break;
        }
    }

    if (dangerous)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}