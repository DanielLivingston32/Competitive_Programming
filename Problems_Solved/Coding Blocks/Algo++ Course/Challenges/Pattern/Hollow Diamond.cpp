#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = n / 2;
    bool reversed = false;
    int cnt = 0;
    while (i <= n / 2)
    {
        cnt = 0;
        while (cnt < (n - (2 * (n / 2 - i) - 1)) / 2)
        {
            cout << "*\t";
            cnt++;
        }
        cnt = 0;
        while (cnt < 2 * (n / 2 - i) - 1)
        {
            cout << "\t";
            cnt++;
        }
        cnt = 0;
        while (cnt < (n - (2 * (n / 2 - i) - 1)) / 2 && cnt < n / 2)
        {
            cout << "*\t";
            cnt++;
        }
        cout << endl;

        if (i == 0)
        {
            reversed = true;
            i++;
        }
        else if (reversed)
        {
            i++;
        }
        else
        {
            i--;
        }
    }
}