// Here we are gonna use a two pointer approach
// Time Complexity: O(N logN) if unsorted else O(N) if sorted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter no of elements and the pair sum to find: ";
    cin >> n >> k;
    int a[n];
    cout << endl
         << "Enter the elements one by one in one line: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        if (a[left] + a[right] == k)
        {
            cout << "(" << left << "," << right << ")" << endl;
            left++;
            right--;
        }
        else if (a[left] + a[right] < k)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
}
