//Time Complexity: O(1)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int hash[26] = {0};
    for (auto x : input)
    {
        hash[x - 'a'] += 1;
    }
    int max_frequency = hash[0];
    int max_idx = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max_frequency < hash[i])
        {
            max_frequency = hash[i];
            max_idx = i;
        }
    }
    cout << (char)(max_idx + 97);
}