#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    ans.push_back(1);

    for (int i = 2; i <= n; i++)
    {
        long int idx = 0;
        long long carry = 0;
        while (idx < ans.size())
        {
            long long temp = ans[idx];
            temp *= i;
            temp += carry;
            ans[idx] = temp % 10;
            carry = temp / 10;
            idx++;
        }
        if (carry > 0)
        {
            while (carry)
            {
                ans.push_back(carry % 10);
                carry /= 10;
            }
        }
    }
    for (long int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
}