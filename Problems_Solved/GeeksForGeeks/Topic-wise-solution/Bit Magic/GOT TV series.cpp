#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        cout << (n * __builtin_popcountl(n)) << endl;
    }
    return 0;
}