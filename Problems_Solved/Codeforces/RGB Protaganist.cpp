#include <iostream>
#include <climits>

using namespace std;

int knapSack(long v[], long w[], int n, long W)
{
    if (W < 0)
        return INT_MIN;
    if (n < 0 || W == 0)
        return 0;
    int in = v[n] + knapSack(v, w, n - 1, W - w[n]);
    int ex = knapSack(v, w, n - 1, W);
    return max(in, ex);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int p, f;
        cin >> p >> f;
        long int cnt[2];
        cin >> cnt[0] >> cnt[1];
        long int no[2];
        cin >> no[0] >> no[1];

        int v[] = {10, 20, 30, 40, 60, 70};
        int w[] = {1, 2, 3, 6, 7, 4};
        int W = 7;
        int n = 2;
        cout << knapSack(cnt, no, n - 1, p);
        return 0;
    }
}
