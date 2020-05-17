#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x[12], mini = 100, maxi = -100, temp;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        for (int i = 1; i < n; i++)
        {
            temp = x[i] - x[i - 1];
            if (temp < mini)
            {
                mini = temp;
            }
            if (temp > maxi)
            {
                maxi = temp;
            }
        }
        cout << mini << maxi << endl;
    }
}