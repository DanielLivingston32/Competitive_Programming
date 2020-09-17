#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (a.length() < b.length())
        {
            while (a.length() != b.length())
            {
                a = "0" + a;
            }
        }
        else if (b.length() < a.length())
        {
            while (a.length() != b.length())
            {
                b = "0" + a;
            }
        }
        string res = "";
        for (int i = 0; i < a.length(); i++)
        {
            if (((int)a[i] - 48) ^ ((int)b[i] - 48))
            {
                res += "1";
            }
            else
            {
                res += "0";
            }
        }
        cout << res << endl;
    }
}