#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long number;
        cin >> number;

        long int binary = 0;
        int cnt = 0;

        while (number)
        {
            int temp = number % 10;
            binary += temp * pow(2, cnt);
            cnt++;
            number /= 10;
        }

        cout << binary << endl;
    }
}