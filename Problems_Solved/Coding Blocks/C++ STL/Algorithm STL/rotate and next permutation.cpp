#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    rotate(v.begin(), v.begin() + 4, v.end());
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;
    next_permutation(v.begin(), v.end());
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;
}
