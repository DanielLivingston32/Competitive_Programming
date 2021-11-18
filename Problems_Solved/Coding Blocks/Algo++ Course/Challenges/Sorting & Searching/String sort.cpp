#include <bits/stdc++.h>
using namespace std;

bool comparator(string a, string b)
{
    size_t found = a.find(b);
    if (found == 0)
    {
        return a.length() > b.length();
    }
    return a < b;
}

int main()
{
    int n;
    cin >> n;
    vector<string> list;
    string temp;
    while (n--)
    {
        cin >> temp;
        list.push_back(temp);
    }
    sort(list.begin(), list.end(), comparator);
    for (auto i : list)
    {
        cout << i << endl;
    }

    return 0;
}