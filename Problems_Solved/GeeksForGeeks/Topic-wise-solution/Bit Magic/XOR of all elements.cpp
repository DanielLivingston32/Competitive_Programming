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
        int arr[n], xor_all = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            xor_all ^= arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << (xor_all ^ arr[i]) << " ";
        }
        cout << endl;
    }
    return 0;
}