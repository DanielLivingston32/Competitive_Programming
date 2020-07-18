#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        if (i == 0)
        {
            while (cnt < n)
            {
                if (cnt == 0 || cnt >= n / 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                cnt++;
            }
            cout << endl;
        }
        else if (i != n / 2 && i < n / 2 + 1)
        {
            cout << "*";
            int cnt_space = 0;
            while (cnt_space < n - (n / 2 + 2))
            {
                cout << " ";
                cnt_space++;
            }
            cout << "*" << endl;
            cnt++;
        }
        else if (i == n / 2)
        {
            while (cnt < n)
            {
                cout << "*";
                cnt++;
            }
            cout << endl;
        }
        else if (i > n / 2 && i != n - 1)
        {
            int cnt_before_space = 0;
            while (cnt_before_space < n / 2)
            {
                cout << " ";
                cnt_before_space++;
            }
            cout << "*";
            int cnt_space_2 = 0;
            while (cnt_space_2 < n - (n / 2 + 2))
            {
                cout << " ";
                cnt_space_2++;
            }
            cout << "*" << endl;
            cnt++;
        }
        else
        {

            while (cnt < n)
            {
                if (cnt == n - 1 || cnt < n / 2 + 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                cnt++;
            }
        }
    }
}