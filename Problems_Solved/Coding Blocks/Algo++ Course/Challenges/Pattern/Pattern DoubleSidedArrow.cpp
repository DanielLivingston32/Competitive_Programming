#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    bool reverse = false;
    while (i >= 1)
    {
        int j = i;
        bool rev = false;
        while (j <= i)
        {
            if (j == 1)
            {
                cout << j << "\t" << j << " ";
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
    }
}