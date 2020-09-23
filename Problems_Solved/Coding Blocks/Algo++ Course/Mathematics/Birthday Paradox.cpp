// Given a probability we need to find out how many people should be present in the hall so that the chances of getting 2 people who
// have the same birthday matches the given probabilty

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double x = 1.0, p;
    cin >> p;
    int people = 1;
    float num = 365;
    float denom = 365;
    while (x > 1 - p)
    {
        num--;
        x = x * (num / denom);
        people++;
    }
    cout << people;
    return 0;
}