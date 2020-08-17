#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPalindrome(string b)
{
    for (int i = 0; i < b.length() / 2; i++)
    {
        if (b[i] != b[b.length() - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

void antiPalindrome(string a)
{
    string b = a;
    sort(b.begin(), b.end());
    if (a == b)
    {
        if (!isPalindrome(b))
        {
            cout << b << endl;
            return;
        }
        cout << -1 << endl;
    }
    else
    {
        cout << b << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    string temp;
    while (t--)
    {
        cin >> temp;
        antiPalindrome(temp);
    }
}