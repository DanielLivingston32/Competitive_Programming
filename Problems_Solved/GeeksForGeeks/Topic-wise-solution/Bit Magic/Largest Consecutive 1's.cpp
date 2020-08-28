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
        int cnt = 0;
        while (n)
        {
            cnt++;
            n = n & (n << 1);
        }
        cout << cnt << endl;
    }
    return 0;
}

// Need to write this method to notebook.