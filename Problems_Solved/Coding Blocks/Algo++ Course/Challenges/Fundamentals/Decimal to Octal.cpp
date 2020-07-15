#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long int no;
    cin >> no;
    vector<int> ans;
    while (no)
    {
        ans.push_back(no % 8);
        no /= 8;
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}