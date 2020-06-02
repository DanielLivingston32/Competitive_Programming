// Time Complexity of this approach: O(N Log N)
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// You might try lexographical comparison by just using return a>b but it doesnt work due to some reason...
// Use this method...
bool comparatorFunc2(int a, int b)
{
    string x = to_string(a);
    string y = to_string(b);
    string xy = x.append(y);
    string yx = y.append(x);
    return (xy > yx) ? 1 : 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + m, comparatorFunc2);
        for (int i = 0; i < m; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
}