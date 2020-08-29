#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 0)
        {
            cout << "NO" << endl;
            break;
        }
        cout << (n & (n - 1) ? "NO" : "YES") << endl;
    }
    return 0;
}