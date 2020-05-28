#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char largest[1000], current[1000];
    int curr_length = 0, largest_length = 0;
    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(current, 1000);
        curr_length = strlen(current);
        if (curr_length > largest_length)
        {
            strcpy(largest, current);
            largest_length = curr_length;
        }
    }
    cout << largest << " is the largest string with length " << largest_length;
}