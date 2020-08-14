#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(string a, string b)
{
    string ab = a.append(b);
    string ba = b.append(a);
    return ab > ba ? 1 : 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> arr;
        int n;
        cin >> n;
        arr.reserve(n);
        string temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end(), Compare);
        for (auto x : arr)
        {
            cout << x;
        }
        cout << endl;
    }
}