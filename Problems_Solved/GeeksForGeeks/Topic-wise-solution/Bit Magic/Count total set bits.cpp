// Time complexity: O(LOG N)

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
        n++;
        int curr_power = 2;
        int cnt = n / 2;
        while (curr_power <= n)
        {
            // Finds total pair group of 0 and 1
            int total_group = n / curr_power;
            // Adding all the set bits... Divinding by 2 because total group contains both 0 and 1
            cnt += (total_group / 2) * curr_power;
            // If total group was odd that means some one might not be included.
            cnt += (total_group & 1) ? (n % curr_power) : 0;

            // Same as doing curr_power*=2
            curr_power <<= 1;
        }
        cout << cnt << endl;
    }
    return 0;
}