#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int no;
    int bits_value[64] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        int j = 0;
        while (no)
        {
            bits_value[j] += (no & 1);
            no = no >> 1;
            j++;
        }
    }
    int ans = 0, power = 1;
    for (int i = 0; i < 64; i++)
    {
        ans += (bits_value[i] % 3) * power;
        power = power << 1;
    }
    cout << ans;
}