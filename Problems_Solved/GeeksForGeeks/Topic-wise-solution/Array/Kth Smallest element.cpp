// Naive Approach

// Time Complexity: O(N Log N)

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        sort(arr, arr + n);
        cout << arr[k - 1] << endl;
    }
    //code
    return 0;
}