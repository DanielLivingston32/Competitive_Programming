#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    int k;
    int arr[26];
    cin >> input >> k;
    int maxValue = 0;
    for (int i = 0; i < 26; i++)
    {
        cin >> arr[i];
        maxValue = max(maxValue, arr[i]);
    }
    ll result = 0;
    int i;
    for (i = 0; i < input.length(); i++)
    {
        result += arr[input[i] - 'a'] * (i + 1);
    }

    for (i = i + 1; i <= input.length() + k; i++)
    {
        result += i * maxValue;
    }
    cout << result;

    return 0;
}