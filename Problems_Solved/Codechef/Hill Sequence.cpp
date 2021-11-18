#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        ld arr[n];
        map<ld, int> frequency;
        int max_freq = 0;
        ld max_e = 0;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            temp = ++frequency[arr[i]];
            max_e = max(arr[i], max_e);
            max_freq = max(max_freq, temp);
        }
        if (max_freq > 2 or frequency[max_e] > 1)
        {
            cout << "-1" << endl;
            continue;
        }

        int i = 0, j = n - 1;
        for (auto itr : frequency)
        {
            if (itr.second == 2)
            {
                arr[i++] = itr.first;
                arr[j--] = itr.first;
            }
            else
            {
                arr[j--] = itr.first;
            }
        }

        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}