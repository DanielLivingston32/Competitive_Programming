// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> spaceString(char str[]);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char str[10000];
        cin >> str;
        vector<string> vec = spaceString(str);
        for (string s : vec)
        {
            cout << s << "$";
        }
        cout << endl;
    }
}
// } Driver Code Ends

void printStrings(char str[], string output, set<string> &ans, int i)
{
    // Base case
    if (str[i] == '\0')
    {
        ans.insert(output);
        return;
    }
    // Recursive case
    // Space not included
    output += str[i];
    printStrings(str, output, ans, i + 1);
    // Space included
    if (str[i + 1] != '\0')
    {
        output += " ";
    }
    printStrings(str, output, ans, i + 1);
}

vector<string> spaceString(char str[])
{
    set<string> ans;
    string output = "";
    printStrings(str, output, ans, 0);
    vector<string> result;
    for (auto itr = ans.rbegin(); itr != ans.rend(); itr++)
    {
        result.push_back(*itr);
    }
    return result;
}