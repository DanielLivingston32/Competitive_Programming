#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int leftPart(int start, int end)
{
    // Base case
    if (start >= end)
    {
        return (start == end ? 2 : 0);
    }
    // Recursive case
    int mid = (start + end) / 2;
    int calc;
    calc = leftPart(start, mid - 1);
    calc += leftPart(mid + 1, end);
    return end - start + 2 + calc;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int left = leftPart(1, n);
        int right = (n * (n + 3)) / 2;
        if (m >= left and m <= right)
        {
            cout << 0 << endl;
        }
        else if (m < left)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << m - right << endl;
        }
    }

    return 0;
}