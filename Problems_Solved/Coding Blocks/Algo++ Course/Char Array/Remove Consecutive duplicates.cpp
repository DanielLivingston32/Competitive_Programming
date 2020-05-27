// The problem is to remove consecutive duplicates and return the array
// For eg: ccoooddingg -> coding

#include <bits/stdc++.h>
using namespace std;

void removeduplicates(char arr[])
{
    int l = strlen(arr);
    if (l <= 1)
    {
        return;
    }
    int prev = 0;
    for (int current = 1; current < l; current++)
    {
        if (arr[current] != arr[prev])
        {
            prev++;
            arr[prev] = arr[current];
        }
    }
    arr[prev + 1] = '\0';
    return;
}

int main()
{
    char arr[1000];
    cin.getline(arr, 1000);
    removeduplicates(arr);
    cout << arr;
}