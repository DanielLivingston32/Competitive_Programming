#include <iostream>
using namespace std;

void oldMan(int src, int help, int dest, int n, int m, int &cnt)
{
    // Base case
    if (n <= 0)
    {
        return;
    }
    // Recursive case
    oldMan(src, dest, help, n - 1, m, cnt);
    cnt++;
    if (cnt == m)
    {
        cout << src << " " << dest << endl;
    }
    oldMan(help, src, dest, n - 1, m, cnt);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        oldMan(1, 2, 3, n, m, cnt);
    }
    return 0;
}