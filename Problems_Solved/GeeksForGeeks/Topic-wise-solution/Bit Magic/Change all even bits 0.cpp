#include <iostream>
#include <math.h>
using namespace std;

// A better solution would be to n&0xaaaaaaaa(2863311530)[10 combination upto 32 bit] as it is given 32bit.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n, mask = 0;
        cin >> n;
        int size = log2(n) + 1;
        while (size)
        {
            if ((size & 1) == 0)
            {
                mask <<= 1;
                mask |= 1;
            }
            else
            {
                mask <<= 1;
            }
            size--;
        }
        cout << (n & mask) << endl;
    }
    return 0;
}