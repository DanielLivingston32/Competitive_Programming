#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int start = 0, end = n - 1, mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
            {
                break;
            }
            if (arr[mid - 1] < arr[mid] && arr[mid + 1] > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        cout << arr[mid] << endl;
    }
    return 0;
}