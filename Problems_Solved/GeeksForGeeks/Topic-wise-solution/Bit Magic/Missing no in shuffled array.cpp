#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, xor_all = 0, temp;
        cin >> n;
        for (int i = 0; i < (2 * n) - 1; i++)
        {
            cin >> temp;
            xor_all ^= temp;
        }
        cout << xor_all << endl;
    }
    return 0;
}