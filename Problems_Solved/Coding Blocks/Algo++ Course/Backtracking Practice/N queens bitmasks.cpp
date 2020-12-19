#include <bits/stdc++.h>

using namespace std;

int ans = 0;

void nQueensBitmasks(int &Done, int rowMask, int ld, int rd)
{
    if (rowMask == Done)
    {
        ans++;
        return;
    }

    int safe = Done & (~(rowMask | ld | rd));
    while (safe)
    {
        int p = safe & (-safe);
        safe = safe - p;
        nQueensBitmasks(Done, (rowMask | p), (ld | p) << 1, (rd | p) >> 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    int Done = (1 << n) - 1;

    nQueensBitmasks(Done, 0, 0, 0);

    cout << ans;
}