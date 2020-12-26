#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

ll classAssignment(int n)
{
    // Base case
    if (n <= 2)
    {
        return n + 1;
    }
    // Recursive case
    return classAssignment(n - 1) + classAssignment(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << "#" << i << " : " << classAssignment(n) << endl;
    }

    return 0;
}