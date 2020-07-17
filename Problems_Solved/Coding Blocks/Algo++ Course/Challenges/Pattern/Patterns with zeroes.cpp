#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << i << "\t";
            int cnt = 1;
            while (cnt < i - 1)
            {
                cout << "0"
                     << "\t";
                cnt++;
            }
            cout << i;
            cout << endl;
        }
    }
}