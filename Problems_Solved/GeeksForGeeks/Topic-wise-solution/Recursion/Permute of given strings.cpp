#include <bits/stdc++.h>
using namespace std;

void permuteStrings(char input[], char output[], set<string> &ans, int n, int i, int j)
{
    // Base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        string temp(output);
        ans.insert(temp);
        return;
    }
    // Recursive case
    for (int k = i; k < n; k++)
    {
        swap(input[k], input[i]);
        output[j] = input[i];
        permuteStrings(input, output, ans, n, i + 1, j + 1);
        swap(input[k], input[i]);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.get();
        char input[6], output[6];
        set<string> ans;
        cin.get(input, 6);
        int n = strlen(input);
        permuteStrings(input, output, ans, n, 0, 0);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}