#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp, max_value = -1, max_int;
        map<int, int> hashmap;
        int map[11] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            map[temp]++;
        }
        for (int i = 1; i < 11; i++)
        {
            if (map[i] == 0)
            {
                continue;
            }
            hashmap[map[i]]++;
            if (hashmap[map[i]] > max_value)
            {
                max_value = hashmap[map[i]];
                max_int = map[i];
            }
            else if (hashmap[map[i]] == max_value)
            {
                max_int = min(map[i], max_int);
            }
            else
            {
                continue;
            }
        }
        cout << max_int << endl;
    }
}