#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

set<string> s;

void generateString(char input[], char output[], int i, int j)
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
    // Include both the characters
    if (input[i] != '\0' and input[i + 1] != '\0')
    {

        int tempi = input[i] - '0';
        tempi *= 10;
        tempi += input[i + 1] - '0';

        if (tempi <= 26)
        {
            output[j] = (char)(tempi + 96);
            generateString(input, output, i + 2, j + 1);
        }
    }
    // Include first
    output[j] = input[i] + 48;
    generateString(input, output, i + 1, j + 1);
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char input[100];
    cin.getline(input, 100);

    char output[100];

    generateString(input, output, 0, 0);

    set<string>::iterator itr = s.begin();
    cout << "[";
    while (itr != s.end())
    {
        itr++;
        if (itr == s.end())
        {
            itr--;
            cout << (*itr);
        }
        else
        {
            itr--;
            cout << (*itr) << ", ";
        }
        itr++;
    }
    cout << "]" << endl;

    return 0;
}