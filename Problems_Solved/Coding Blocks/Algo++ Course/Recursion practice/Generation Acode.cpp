#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

char alphabet[][2] = {"", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

void generateString(char input[], char output[], int i, int j)
{
    // Base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    // Recursive case
    // Include next character
    if (input[i + 1] != '\0')
    {
        string digit(1, input[i]);
        digit += input[i + 1];
        int digits = stoi(digit);
        if (digits <= 26)
        {
            output[j] = alphabet[digits][0];
            generateString(input, output, i + 2, j + 1);
        }
    }

    // Exclude next character
    output[j] = alphabet[input[i] - '0'][0];
    generateString(input, output, i + 1, j + 1);
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);

    cout << "Enter the no: ";
    char input[100];
    cin.getline(input, 100);

    char output[100];

    generateString(input, output, 0, 0);

    return 0;
}