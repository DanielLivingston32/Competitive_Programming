#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin >> n;
    int maxValueIdx = -1;
    int currentValue;
    int lastDigit = n[n.length() - 1] - '0';
    for (int i = 0; i < n.length(); i++)
    {
        currentValue = n[i] - '0';
        if (!(currentValue & 1))
        {
            maxValueIdx = i;
            if (currentValue < lastDigit)
            {
                swap(n[i], n[n.length() - 1]);
                cout << n;
                return 0;
            }
        }
    }
    if (maxValueIdx == -1)
    {
        cout << -1;
    }
    else
    {
        swap(n[maxValueIdx], n[n.length() - 1]);
        cout << n;
    }

    return 0;
}