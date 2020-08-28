#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        cout << (n & (1 << k) ? "Yes" : "No") << endl;
    }
    return 0;
}