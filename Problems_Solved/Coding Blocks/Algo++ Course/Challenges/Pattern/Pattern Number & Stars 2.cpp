#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt;
    for (int i = n - 1; i >= 0; i--)
    {
        cnt = 0;
        while (cnt < n - i)
        {
            cout << cnt + 1;
            cnt++;
        }
        cnt = 0;
        while (cnt < n - (n - i))
        {
            cout << "*";
            cnt++;
        }
        cout << endl;
    }
}