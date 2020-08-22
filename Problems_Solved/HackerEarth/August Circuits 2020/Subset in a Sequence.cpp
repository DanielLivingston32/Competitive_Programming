#include <iostream>
#include <vector>

using namespace std;

long long binpow(long long a, long long b)
{
    if (b == 0)
    {
        return 1;
    }
    long long res = binpow(a, b / 2);
    if (b % 2)
    {
        return res * res * a;
    }
    else
    {
        return res * res;
    }
}

int main()
{
    int t;
    cin >> t;
    vector<long long int> ans;
    ans.reserve(50);
    while (t--)
    {
        long int n;
        cin >> n;
        int idx = 0;
        while (n)
        {
            if (n & 1 == 1)
            {
                ans.push_back(binpow(3, idx));
            }
            n = n >> 1;
            idx++;
        }
        cout << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
        ans.clear();
    }
}