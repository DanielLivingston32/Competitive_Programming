#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

bool pathFinder(char maze[10][10], int output[10][10], int m, int n, int i, int j)
{
    // Base case
    if (i == m && j == n)
    {
        output[i][j] = 1;
        // Print the output
        for (int k = 0; k <= m; k++)
        {
            for (int l = 0; l <= n; l++)
            {
                cout << output[k][l] << " ";
            }
            cout << endl;
        }
        cout << endl;

        return true;
    }

    // Wrong path cases
    if (i > m or j > n)
    {
        return false;
    }

    if (maze[i][j] == 'x')
    {
        return false;
    }

    // Assume this path is correct
    output[i][j] = 1;

    bool rightSide = pathFinder(maze, output, m, n, i, j + 1);
    bool downSide = pathFinder(maze, output, m, n, i + 1, j);

    // Backtracking part
    output[i][j] = 0;

    // Checking if path was valid
    if (rightSide or downSide)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);

    cout << "Enter maze size[m,n](max no is 10): ";
    int m, n;
    cin >> m >> n;

    cout << "Enter the input maze line by line: ";
    char maze[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }

    int output[10][10] = {0};

    pathFinder(maze, output, m - 1, n - 1, 0, 0);

    return 0;
}