#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Comparator(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> arr;
        int temp1, temp2;
        for (int i = 0; i < n; i++)
        {
            cin >> temp1 >> temp2;
            arr.push_back(make_pair(temp1, temp2));
        }
        sort(arr.begin(), arr.end(), Comparator);
        int cnt = 1, chosen = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i].first >= arr[chosen].second)
            {
                cnt++;
                chosen = i;
            }
        }
        cout << cnt << endl;
    }
}