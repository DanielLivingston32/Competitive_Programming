#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

// Function to extract key from the string
string extractKey(string str, int key)
{

    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}

// Helper Function to convert string to int for numeric comparator function
int toInt(string no)
{
    int res = 0, pow = 1;
    for (int i = no.length() - 1; i >= 0; i--)
    {
        res += ((no[i] - '0') * pow);
        pow *= 10;
    }
    return res;
}

// Comparator function for Numeric comparison in sort algorithm
bool compareNumeric(pair<string, string> s1, pair<string, string> s2)
{
    int key1 = toInt(s1.second);
    int key2 = toInt(s2.second);
    return key1 < key2;
}

// Comparator function for Lexographical comparison in sort algorithm
bool compareLexio(pair<string, string> s1, pair<string, string> s2)
{
    return s1.second < s2.second;
}

int main()
{
    int n;
    cin >> n;
    cin.get();
    string a[n];

    // Gets the string from console
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }

    int key;
    string reverse, sorttype;

    cin >> key >> reverse >> sorttype;

    // Making a pair to store key and whole string ... Will be useful for comparison
    pair<string, string> strPairs[n];

    // First element in pair is the whole string second element is the key
    for (int i = 0; i < n; i++)
    {
        strPairs[i].first = a[i];
        strPairs[i].second = extractKey(a[i], key);
    }

    // If sorttype was numeric we use sort function with our custom numeric comparator for sorting
    if (sorttype == "numeric")
    {
        sort(strPairs, strPairs + n, compareNumeric);
    }
    // If sorttype was Lexographical we use sort function with our custom numeric comparator for sorting
    else
    {
        sort(strPairs, strPairs + n, compareLexio);
    }

    // If reverse was true we reverse the whole sort order by using swap function to swap till center element
    if (reverse == "true")
    {
        for (int i = 0; i <= n / 2; i++)
        {
            swap(strPairs[i], strPairs[n - i - 1]);
        }
    }

    // Finally only print individual row string without printing key
    for (int i = 0; i < n; i++)
    {
        cout << strPairs[i].first << endl;
    }
}