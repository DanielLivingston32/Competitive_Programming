#include <iostream>
using namespace std;

int arr[10001];

void preCalc()
{
    arr[0] = 0;
    for (int i = 1; i < 10001; i++)
    {
        if (i < 4)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = (i / 2 - 1) + arr[i - 2];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    preCalc();
    while (t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
}
