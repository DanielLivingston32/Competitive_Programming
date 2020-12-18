#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void replaceWithPi(char arr[], int i)
{
    // Base case
    if (arr[i] == '\0' && arr[i + 1] == '\0')
    {
        return;
    }

    // Check if p is present
    if (arr[i] == 'p' && arr[i + 1] == 'i')
    {
        int j = i + 2;
        while (arr[j] != '\0')
        {
            j++;
        }
        while (j >= i + 2)
        {
            arr[j + 2] = arr[j];
            j--;
        }
        arr[i] = '3';
        arr[i + 1] = '.';
        arr[i + 2] = '1';
        arr[i + 3] = '4';
        replaceWithPi(arr, i + 4);
    }
    replaceWithPi(arr, i + 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    char arr[1000];
    cin.getline(arr, 1000);
    replaceWithPi(arr, 0);
    cout<<arr;
    return 0;
}