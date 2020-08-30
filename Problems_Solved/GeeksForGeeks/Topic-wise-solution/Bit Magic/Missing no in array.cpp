#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, a = 0, b = 0, temp;
        cin >> n;
        for (long int i = 1; i < n; i++)
        {
            a ^= i;
            cin >> temp;
            b ^= temp;
        }
        a ^= n;
        cout << (a ^ b) << endl;
    }
    return 0;
}