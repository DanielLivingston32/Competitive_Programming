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

    ld arr[n];
    ld startArr[n];
    ld prev = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] += prev;
        if (prev != 0)
        {
            startArr[i] = prev + 1;
        }
        else
        {
            startArr[i] = prev;
        }
        prev = arr[i];
    }

    int m;
    cin >> m;
    ld val;
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        int start = 0;
        int mid;
        int end = n;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (startArr[mid] <= val and arr[mid] >= val)
            {
                break;
            }
            else if (val > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        cout << mid + 1 << endl;
    }

    return 0;
}