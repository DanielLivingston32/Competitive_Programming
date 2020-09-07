#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        unsigned int a, b;
        cin >> a >> b;
        unsigned int mask = ~((1 << ((int)log2(a ^ b) + 1)) - 1);
        cout << (mask & a) << endl;
    }
}
