#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int i, l;
        cin >> i >> l;
        cout << (1 << l) - i << endl;
    }
    return 0;
}