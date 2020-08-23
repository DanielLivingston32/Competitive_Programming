#include <iostream>

using namespace std;

int findRightmostSetBit(int res)
{
    int cnt = 0;
    while (res)
    {
        if (res & 1)
        {
            return cnt;
        }
        res = res & 1;
        cnt++;
    }
    return cnt;
}

int firstUniqueNo(int arr[], int n, int bit_pos)
{
    int res = 0;
    int mask = 1 << bit_pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & mask)
        {
            res ^= arr[i];
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n], res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        res ^= arr[i];
    }
    int bit_pos = findRightmostSetBit(res);
    int a = firstUniqueNo(arr, n, bit_pos);
    int b = res ^ a;
    cout << min(a, b) << " " << max(a, b);
}