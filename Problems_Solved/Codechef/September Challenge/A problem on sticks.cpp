#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        cin >> n;
        set<int> s1;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp != 0)
            {
                s1.insert(temp);
            }
        }
        cout << s1.size() << endl;
    }
}