#include <algorithm>
#include <iostream>
#include <regex>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;

    getline(cin, input);
    input = regex_replace(input, regex("WUB"), ",");
    input = regex_replace(input, regex("[,]+"), " ");
    cout << input;

    return 0;
}