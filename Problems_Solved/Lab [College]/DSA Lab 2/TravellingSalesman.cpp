#include <vector>
#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int tempInt;

    vector<vector<int>> cities;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cin >> tempInt;
            temp.push_back(tempInt);
        }
        cities.push_back(temp);
    }
}