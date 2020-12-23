#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

char keypad[][10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void substringCombination(char input[], char output[], int i, int j)
{
    // Base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }
    // Recursive case
    int digit = input[i] - '0';

    if (digit == 0 or digit == 1)
    {
        substringCombination(input, output, i + 1, j);
    }

    for (int k = 0; keypad[digit][k] != '\0'; k++)
    {
        output[j] = keypad[digit][k];
        substringCombination(input, output, i + 1, j + 1);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);

    cout << "Enter the keyno's: ";
    char input[100];
    cin.getline(input, 100);

    char output[100];

    substringCombination(input, output, 0, 0);

    return 0;
}