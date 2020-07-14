#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    bool reverse = false;

    while (i >= 1)
    {

        int cnt = 0;

        while (cnt < (n / 2) + 1 - i)
        {
            cout << "    ";
            cnt++;
        }

        int j = i;
        bool rev = false;

        while (j <= i)
        {
            if (j == 1 && i != 1)
            {
                cout << j;
                int cnt_space = 0;
                while (cnt_space < 4 * (i - 1) - 1)
                {
                    cout << " ";
                    cnt_space++;
                }
                cout << j << " ";
                j++;
                rev = true;
            }
            else if (rev)
            {
                cout << j << " ";
                j++;
            }
            else
            {
                cout << j << " ";
                j--;
            }
            if (j == 0)
            {
                break;
            }
        }
        if (i == n / 2 + 1)
        {
            i--;
            reverse = true;
        }
        else if (reverse)
        {
            i--;
        }
        else
        {
            i++;
        }
        cout << endl;
    }
}