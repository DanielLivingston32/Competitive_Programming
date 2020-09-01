// Time complexity: O(Number of bits)  --- Basically Log N +1

#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    cout << __builtin_popcountl(n);
}