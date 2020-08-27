#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int bit_size_a = (int)log2(a) + 1;
        int bit_size_b = (int)log2(b) + 1;
        if (bit_size_a > bit_size_b)
        {
            b <<= (bit_size_a - bit_size_b);
        }
        else
        {
            a <<= (bit_size_b - bit_size_a);
        }
        cout << (a ^ b) << endl;
    }
    return 0;
}