#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> pos;
    vector<int> neg;
    bool first_negative = true;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (first_negative and temp < 0)
        {
            cout << 1 << " " << temp << endl;
            first_negative = false;
            continue;
        }
        else if (temp < 0)
        {
            neg.push_back(temp);
        }
        else if (temp != 0)
        {
            pos.push_back(temp);
        }
    }
    int i = 0;
    if (pos.size() == 0)
    {
        cout << 2 << " " << neg[i] << " " << neg[i + 1] << endl;
        i += 2;
    }
    else
    {
        cout << pos.size() << " ";
        for (int i = 0; i < pos.size(); i++)
        {
            cout << pos[i] << " ";
        }
    }
    cout << endl;
    cout << 1 + neg.size() - i << " " << 0 << " ";
    while (i < neg.size())
    {
        cout << neg[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}