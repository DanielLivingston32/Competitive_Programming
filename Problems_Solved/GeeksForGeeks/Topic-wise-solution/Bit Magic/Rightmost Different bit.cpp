#include <iostream>
using namespace std;

int LogNSolution(int n, int m)
{
    if (m == n)
    {
        return -1;
    }
    int cnt = 1;
    while (n)
    {
        if ((n & 1) != (m & 1))
        {
            break;
        }
        n = n >> 1;
        m = m >> 1;
        cnt++;
    }
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        cout << LogNSolution(n, m) << endl;
    }
    return 0;
}