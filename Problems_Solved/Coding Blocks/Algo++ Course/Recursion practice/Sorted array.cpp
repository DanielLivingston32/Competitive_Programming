#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

bool checkSortedArray(int n, int arr[])
{
    // Base case
    if (n == 0 || n == 1)
    {
        return true;
    }
    //Recursive case
    if (arr[0] <= arr[1] && checkSortedArray(n - 1, arr + 1))
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << (checkSortedArray(n, arr) ? "true" : "false") << endl;

    return 0;
}