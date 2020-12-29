#include <bits/stdc++.h>

#define ll long long

using namespace std;

char table[][5] = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void smartKeypad(char input[], char output[], int i, int j)
{
    // Base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }
    // Recursive case
    int index = input[i] - '0';
    for (int k = 0; table[index][k] != '\0'; k++)
    {
        output[j] = table[index][k];
        smartKeypad(input, output, i + 1, j + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);

    char input[11];

    cin.getline(input, 11);

    char output[11];

    smartKeypad(input, output, 0, 0);

    return 0;
}