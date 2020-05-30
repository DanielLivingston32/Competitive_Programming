// The brute force implementation of this problem is of the time complexity: O(N^6)
// This is a most efficient algorithm to find the sum of all submatrix of a matrix... Time Complexity: O(N^2)
// There is one another implementation with prefix sum build/optimized on the brute force approach with time complexity: O(N^4)

#include <iostream>
using namespace std;

long long sumSubmatrixAll(int arr[][100], int n, int m)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tr = (i + 1) * (j + 1);
            int br = (n - i) * (n - j);
            sum += arr[i][j] * (tr * br);
        }
    }
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << sumSubmatrixAll(arr, n, m);
}