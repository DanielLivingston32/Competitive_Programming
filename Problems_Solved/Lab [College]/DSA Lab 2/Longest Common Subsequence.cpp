#include <bits/stdc++.h>

using namespace std;

int max(int a, int b);

int lcs(char *X, char *Y, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i][j - 1], L[i - 1][j]);
        }
    }

    return L[m][n];
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    
    cout << "Enter the size of the first string: ";

    int n;
    cin >> n;
    cin.get();

    cout << "Enter string 1: ";
    char X[n + 1];
    cin.getline(X, n + 1);

    cout << "Enter the size of the second string: ";
    int m;
    cin >> m;
    cin.get();

    cout << "Enter string 2: ";

    char Y[m + 1];
    cin.getline(Y, m + 1);

    cout << "Length of LCS is "
         << lcs(X, Y, n, m);

    return 0;
}
