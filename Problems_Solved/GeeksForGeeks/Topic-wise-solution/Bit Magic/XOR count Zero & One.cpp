#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, cnt = 0, ones = 0;
        cin >> n;
        while (n)
        {
            cnt++;
            ones += (n & 1);
            n = n >> 1;
        }
        cout << (ones ^ (cnt - ones)) << endl;
    }
    return 0;
}