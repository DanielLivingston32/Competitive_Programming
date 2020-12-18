#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void towerOfHanoi(int n, char scr, char helper, char dest)
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    // Move n-1 to helper
    towerOfHanoi(n - 1, scr, dest, helper);
    // Shift nth disk from src to dest
    cout << "Shifting " << "disk "<<n<<" from " << scr << " to " << dest << endl;
    // Mover n-1 to dest
    towerOfHanoi(n - 1, helper, scr, dest);
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}