#include <iostream>

using namespace std;

int findMinimumRounds(int arr[], int n, int k)
{
    int sum_till_now = arr[0];
    if (sum_till_now > k)
    {
        return -1;
    }
    int trips = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > k)
        {
            return -1;
        }
        if (sum_till_now + arr[i] <= k)
        {
            sum_till_now += arr[i];
        }
        else
        {
            trips++;
            sum_till_now = arr[i];
        }
    }
    return trips;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int weights[n];
        for (int i = 0; i < n; i++)
        {
            cin >> weights[i];
        }
        cout << findMinimumRounds(weights, n, k) << endl;
    }
}