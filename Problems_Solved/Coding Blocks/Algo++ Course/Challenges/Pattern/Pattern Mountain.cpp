#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;
    for (int i = 1, j = n; i < n; i++)
    {
        if (i > 1)
        {
            temp = 1;
            while (temp < i)
            {
                cout << temp << "\t";
                temp++;
            }
        }
        cout << i;
        int cnt = 0;
        while (cnt < (j - 1) * 2)
        {
            cout << "\t";
            cnt++;
        }
        j--;
        cout << i;
        if (i > 1)
        {
            temp = i - 1;
            while (temp >= 1)
            {
                cout << "\t" << temp;
                temp--;
            }
        }
        cout << endl;
    }
    int final_cnt = 1;
    while (final_cnt < n)
    {
        cout << final_cnt << "\t";
        final_cnt++;
    }
    cout << final_cnt;
    final_cnt = n - 1;
    while (final_cnt >= 1)
    {
        cout << "\t" << final_cnt;
        final_cnt--;
    }
}