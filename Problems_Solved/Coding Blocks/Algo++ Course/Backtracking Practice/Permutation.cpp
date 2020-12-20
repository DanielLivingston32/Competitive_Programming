#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void permutations(char input[], int i)
{
    //Base case
    if (input[i] == '\0')
    {
        cout << input << endl;
        return;`
    }

    // Recursive case
    for (int j = i; input[j] != '\0'; j++)
    {
        swap(input[i], input[j]);
        permutations(input, i + 1);
        //Backtracking
        swap(input[i], input[j]);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);

    cout << "Enter input: ";
    char input[100];
    cin.getline(input, 100);

    permutations(input, 0);

    return 0;
}