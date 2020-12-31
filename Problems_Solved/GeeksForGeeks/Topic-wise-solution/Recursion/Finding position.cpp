#include <iostream>
#include <math.h>
using namespace std;

long int findPosition(long int n, long int power)
{
    // Base case
    if (power > n)
    {
        return power / 2;
    }
    // Recursive case
    return findPosition(n, power * 2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        cout << findPosition(n, 1) << endl;
    }
    return 0;
}