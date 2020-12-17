#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void increaseOrder(long int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }
    // Recursive case
    increaseOrder(n - 1);
    cout << n << " ";
}

void decreaseOrder(long int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    decreaseOrder(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long int n;
    cin >> n;
    cout << "Increasing order" << endl;
    increaseOrder(n);
    cout << "\nDecreasing order" << endl;
    decreaseOrder(n);

    return 0;
}