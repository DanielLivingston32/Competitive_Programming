#include <iostream>
#include <algorithm>

using namespace std;

bool isPossible(int arr[], int n, int break_value, int m)
{
    int studentUsed = 1;
    int noOfPagesReading = 0;
    for (int i = 0; i < n; i++)
    {
        if (noOfPagesReading + arr[i] > break_value)
        {
            studentUsed++;
            noOfPagesReading = arr[i];
            if (studentUsed > m)
            {
                return 0;
            }
        }
        else
        {
            noOfPagesReading += arr[i];
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int books[n];
        int end = 0;

        if (n < m)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> books[i];
            end += books[i];
        }

        int start = books[n - 1], mid;

        int ans = end;

        while (start <= end)
        {
            mid = (start + end) / 2;
            if (isPossible(books, n, mid, m))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = start + 1;
            }
        }
        cout << ans << endl;
    }
}