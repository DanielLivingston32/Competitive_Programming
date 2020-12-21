#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void permutations(char input[], int i, set<string> &s)
{
    //Base case
    if (input[i] == '\0')
    {
        string inp(input);
        s.insert(inp);
        return;
    }

    // Recursive case
    for (int j = i; input[j] != '\0'; j++)
    {
        swap(input[i], input[j]);
        permutations(input, i + 1, s);
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

    set<string> s;

    permutations(input, 0, s);
    for (auto i : s)
    {
        cout << i << endl;
    }

    return 0;
}