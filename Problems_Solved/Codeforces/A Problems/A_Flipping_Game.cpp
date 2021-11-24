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
    int arr[n];
    int o_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            o_cnt++;
            arr[i] = -1;
        }
        else
        {
            arr[i] = 1;
        }
    }
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_ending_here + arr[i] >= arr[i])
        {
            max_ending_here += arr[i];
        }
        else
        {
            max_ending_here = arr[i];
        }
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
    }
    cout << max_so_far + o_cnt;
    return 0;
}