#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_val = arr[n - 1];
    int max_idx = n - 1;
    int min_val = arr[0];
    int min_idx = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[n - i - 1] >= max_val)
        {
            max_val = arr[n - i - 1];
            max_idx = n - i - 1;
        }
        if (arr[i] <= min_val)
        {
            min_val = arr[i];
            min_idx = i;
        }
    }
    if (max_idx > min_idx)
    {
        cout << (max_idx + n - 2 - min_idx);
    }
    else
    {
        cout << (max_idx + n - 1 - min_idx);
    }
}