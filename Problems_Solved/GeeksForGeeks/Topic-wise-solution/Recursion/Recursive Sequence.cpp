#include <iostream>
using namespace std;

long long recursiveSequence(int n, int &iter)
{
    // Base case
    if (n <= 0)
    {
        return 0;
    }
    // Recursive case
    long long subProblem = recursiveSequence(n - 1, iter);
    long long calc = 1;
    int i;
    for (i = iter; i < iter + n; i++)
    {
        calc *= i;
    }
    iter = i;
    // cout << "Calc: " << calc << endl;
    return calc + subProblem;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int iter = 1;

        cout << recursiveSequence(n, iter) << endl;
    }
    return 0;
}
