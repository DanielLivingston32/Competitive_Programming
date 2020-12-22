#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int profit(int n, int c, int prices[], int weight[])
{
    // Base case
    if (n == 0 or c <= 0)
    {
        return 0;
    }
    int inc = 0;
    // Include n-1 item
    if (weight[n - 1] <= c)
    {
        inc = prices[n - 1] + profit(n - 1, c - weight[n - 1], prices, weight);
    }
    // Exclude n-1 item
    int exc = profit(n - 1, c, prices, weight);

    return max(inc, exc);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout << "Enter total no of items: ";
    int n;
    cin >> n;

    cout << "Enter total capacity: ";
    int c;
    cin >> c;

    cout << "Enter price of items: ";
    int prices[n];
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cout << "Enter weight of items: ";
    int weights[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    cout << profit(n, c, prices, weights);

    return 0;
}