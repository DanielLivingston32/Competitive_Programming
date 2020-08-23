#include <iostream>

using namespace std;

bool isPossible(int rankOfCooks[], long int mid, int n, int c)
{
    int total_parathas = 0;
    for (int i = 0; i < c; i++)
    {
        int r = rankOfCooks[i];
        int time = r, idx = 2;
        while (time <= mid)
        {
            total_parathas++;
            time += idx * r;
            idx++;
        }
    }
    if (total_parathas >= n)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; //No of Pratas
        cin >> n;

        int c; //No of Cooks
        cin >> c;

        int rankOfCooks[c];
        for (int i = 0; i < c; i++)
        {
            cin >> rankOfCooks[i];
        }

        long int start = 0, r = rankOfCooks[0], end = 0, mid, ans = -1;
        for (int i = 1; i <= n; i++)
        {
            end += i * r;
        }
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (isPossible(rankOfCooks, mid, n, c))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout << ans << endl;
    }
}