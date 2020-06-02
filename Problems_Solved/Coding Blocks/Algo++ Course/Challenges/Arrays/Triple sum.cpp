// Time complexity of approach: O(N^2)

#include <algorithm>
#include <iostream>

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
    int k;
    cin >> k;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int chk = arr[i] + arr[left] + arr[right];
            if (chk == k)
            {
                cout << arr[i] << ", " << arr[left] << " and " << arr[right] << endl;
                left++;
                right--;
            }
            else if (chk < k)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
}