//Time Complexity: O(1)
#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;
    int ascii = (int)c;

    if (ascii > 96 && ascii < 123)
    {
        cout << "L";
    }
    else if (ascii > 64 && ascii < 91)
    {
        cout << "U";
    }
    else
    {
        cout << "I";
    }
}