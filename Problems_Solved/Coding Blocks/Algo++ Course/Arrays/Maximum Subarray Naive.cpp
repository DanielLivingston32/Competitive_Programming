//Naive Approch
//Time Complexity O(N^3)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_sum = 0;
    int left, right;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int current_sum = 0;
            for (int k = i; k <= j; k++)
            {
                current_sum += arr[k];
            }
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                left = i;
                right = j;
            }
        }
    }
    cout << "Maximum sum is : " << max_sum << endl;
    cout << "The elements are as follow:" << endl;
    for (int i = left; i <= right; i++)
    {
        cout << arr[i] << ", ";
    }
}