#include <bits/stdc++.h>

using namespace std;

void ReplacePi(char a[], int i)
{
    // Base case
    if (a[i] == '\0' or a[i + 1] == '\0')
    {
        return;
    }

    // Look for pi in current location
    if (a[i] == 'p' and a[i + 1] == 'i')
    {
        // Shift + replace elements
        int j = i + 2;

        // Take j to the end
        while (a[j] != '\0')
        {
            j++;
        }

        // Shifting from right to left
        while (j >= i + 2)
        {
            a[j + 2] = a[j];
            j--;
        }

        // Replacement
        a[i] = '3';
        a[i + 1] = '.';
        a[i + 2] = '1';
        a[i + 3] = '4';

        // Recursive call
        ReplacePi(a, i + 4);
    }
    else
    {
        // Go to next position
        ReplacePi(a, i + 1);
    }
    return;
}

int main()
{
    char a[1000];
    cin >> a;
    ReplacePi(a, 0);
    cout << a;
}