#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

bool canPlace(int grid[9][9], int n, int i, int j, int k)
{

    int z = 0;
    // Vertical check
    for (z = 0; z < n; z++)
    {
        if (grid[z][j] == k)
        {
            return false;
        }

        if (grid[i][z] == k)
        {
            return false;
        }
    }
    // Grid check
    int start_i = i / 3;
    int start_j = j / 3;
    for (int x = start_i * 3; x < 3 * (start_i + 1); x++)
    {
        for (int y = start_j * 3; y < 3 * (start_j + 1); y++)
        {
            if (grid[x][y] == k)
            {
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(int grid[9][9], int n, int i, int j)
{
    // Base case
    if (i == n)
    {
        //Print board
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                cout << grid[x][y] << " ";
            }
            cout << endl;
        }
        return true;
    }

    if (j == n)
    {
        return sudokuSolver(grid, n, i + 1, 0);
    }

    if (grid[i][j])
    {
        return sudokuSolver(grid, n, i, j + 1);
    }

    // Recursive
    for (int k = 1; k <= n; k++)
    {
        if (canPlace(grid, n, i, j, k))
        {
            // Make the current element equal to k
            grid[i][j] = k;
            // Ask recursion to find out the answer for the remaining grids.
            bool solution = sudokuSolver(grid, n, i, j + 1);
            if (solution)
            {
                return true;
            }
        }
    }
    // Backtracking - As solution isn't right
    grid[i][j] = 0;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int grid[9][9] = {{3, 1, 6, 5, 7, 8, 4, 9, 2},
                      {5, 2, 9, 1, 3, 4, 7, 6, 8},
                      {4, 8, 7, 6, 2, 9, 5, 3, 1},
                      {2, 6, 3, 0, 1, 5, 9, 8, 7},
                      {9, 7, 4, 8, 6, 0, 1, 2, 5},
                      {8, 5, 1, 7, 9, 2, 6, 4, 3},
                      {1, 3, 8, 0, 4, 7, 2, 0, 6},
                      {6, 9, 2, 3, 5, 1, 8, 7, 4},
                      {7, 4, 5, 0, 8, 6, 3, 1, 0}};

    sudokuSolver(grid, 9, 0, 0);

    return 0;
}