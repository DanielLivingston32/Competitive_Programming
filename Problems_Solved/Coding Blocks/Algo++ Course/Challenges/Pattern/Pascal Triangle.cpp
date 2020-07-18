#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt;
    int k = (n - 1) * 2;

    for (int i = 0; i < n; i++)
    {

        cnt = 0;
        while (cnt < k + 5)
        {
            cout << " ";
            cnt++;
        }
        k -= 2;
        int val = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << val << "   ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
}