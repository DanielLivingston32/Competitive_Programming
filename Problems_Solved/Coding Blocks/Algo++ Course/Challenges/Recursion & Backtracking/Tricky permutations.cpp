#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

set<string> s;

void trickyPermutations(char input[], char output[], int i, int j)
{
    // Base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        string temp(output);
        s.insert(temp);
        return;
    }

    // Recursive case
    for (int k = i; input[k] != '\0'; k++)
    {
        output[j] = input[k];
        swap(input[i], input[k]);
        trickyPermutations(input, output, i + 1, j + 1);
        // Backtracking
        swap(input[i], input[k]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);

    char input[9];
    cin.getline(input, 9);

    char output[9];

    trickyPermutations(input, output, 0, 0);

    for (auto i : s)
    {
        cout << i << endl;
    }

    return 0;
}