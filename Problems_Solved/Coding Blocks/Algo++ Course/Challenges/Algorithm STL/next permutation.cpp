#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        next_permutation(arr.begin(), arr.end());
        for (auto x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}