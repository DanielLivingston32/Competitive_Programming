// Time Complexity:O(N^2) Space Complexity:O(m+n)

void Solution::setZeroes(vector<vector<int>> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int m = A[0].size();
    // One array to store the row which have zero and other one for columns
    bool R[n] = {0};
    bool C[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == 0)
            {
                R[i] = 1;
                C[j] = 1;
                continue;
            }
        }
    }
    // To mark all the Rows with 0 as 0
    for (int i = 0; i < n; i++)
    {
        if (R[i] == 1)
        {
            int j = 0;
            while (j < m)
            {
                A[i][j] = 0;
                j++;
            }
        }
    }
    // To mark all the column with 0 as 0
    for (int j = 0; j < m; j++)
    {
        if (C[j] == 1)
        {
            int i = 0;
            while (i < n)
            {
                A[i][j] = 0;
                i++;
            }
        }
    }
}
