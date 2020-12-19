#include <bits/stdc++.h>

using namespace std;

bitset<20> col, ld, rd;

int nQueensBitset(int n, int i)
{
    //Base case
    if (i == n)
    {
        return 1;
    }

    // Recursive case
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
        if (col[j] == 0 && ld[i + j] == 0 && rd[i - j + (n - 1)] == 0)
        {
            col[j] = ld[i + j] = rd[i - j + (n - 1)] = 1;
            cnt += nQueensBitset(n, i + 1);
            // Backtracking
            col[j] = ld[i + j] = rd[i - j + (n - 1)] = 0;
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    cout << nQueensBitset(n, 0);
}