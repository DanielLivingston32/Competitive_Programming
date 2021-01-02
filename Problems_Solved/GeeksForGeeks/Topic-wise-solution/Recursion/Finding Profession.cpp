#include <iostream>
using namespace std;

char findProfession(int level, int position)
{
    // Base case
    if (level == 1)
    {
        return 'e';
    }
    // Recursive case
    char parent = findProfession(level - 1, (position + 1) / 2);
    if (parent == 'e')
    {
        if (position & 1)
        {
            return 'e';
        }
        else
        {
            return 'd';
        }
    }
    else
    {
        if (position & 1)
        {
            return 'd';
        }
        else
        {
            return 'e';
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int level, position;
        cin >> level >> position;
        bool profession = 1;
        cout << (findProfession(level, position) == 'e' ? "Engineer" : "Doctor") << endl;
    }
    return 0;
}