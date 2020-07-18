#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        while (cnt < n - i - 1)
        {
            cout << " ";
            cnt++;
        }

        if (i == 0 || i == n - 1)
        {
            cnt = 0;
            while (cnt < n)
            {
                cout << "*";
                cnt++;
            }
            cout << endl;
        }
        else
        {
            cout << "*";
            cnt = 0;
            while (cnt < n - 2)
            {
                cout << " ";
                cnt++;
            }
            cout << "*" << endl;
        }
    }
}