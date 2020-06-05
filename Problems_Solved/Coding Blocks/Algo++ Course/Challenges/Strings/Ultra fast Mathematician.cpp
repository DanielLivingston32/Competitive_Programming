//Time Complexity: O(t * Size of the string(i.e Size of both numbers))
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.get();
    while (t--)
    {
        char input[201];
        cin.getline(input, 201);
        char *ptr = strtok(input, " ");
        char *ptr2 = strtok(NULL, " ");
        int i = 0;
        while (*(ptr + i) != '\0')
        {
            int l1 = *(ptr + i);
            int l2 = *(ptr2 + i);
            if (l1 == l2)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
            i++;
        }
        cout << endl;
    }
}