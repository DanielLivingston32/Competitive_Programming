#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void subsequence(char input[], char output[], int i, int j)
{
    // Base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }
    // Recursive case
    // Include current character
    output[j] = input[i];
    subsequence(input, output, i + 1, j + 1);
    // Exclude current character
    subsequence(input, output, i + 1, j);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char arr[1000], temp_arr[1000];
    cin.getline(arr, 1000);
    subsequence(arr, temp_arr, 0, 0);

    return 0;
}