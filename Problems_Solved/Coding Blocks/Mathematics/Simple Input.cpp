#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    sum += n;
    while (sum >= 0)
    {
        cout << n << endl;
        cin >> n;
        sum += n;
    }

    return 0;
}