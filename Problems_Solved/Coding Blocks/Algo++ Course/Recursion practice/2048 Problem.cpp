#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

string number_arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void noToSpelling(long int no)
{
    // Base case
    if (no == 0)
    {
        return;
    }
    // Recursive case
    noToSpelling(no / 10);
    string result = number_arr[no % 10];
    result[0] = toupper(result[0]);
    cout << result << " ";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout << "Enter the no to print spelling: ";
    long int no;
    cin >> no;
    noToSpelling(no);

    return 0;
}