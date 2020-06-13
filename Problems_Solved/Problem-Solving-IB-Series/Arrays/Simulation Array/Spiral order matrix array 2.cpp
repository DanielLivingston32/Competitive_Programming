// Note there will be edge cases if the row size and column size are different...
// Time Complexity:O(N^2)

vector<vector<int>> Solution::generateMatrix(int A)
{
    vector<vector<int>> spiral_arr(A, vector<int>(A));
    int row_start = 0, row_end = A - 1;
    int col_start = 0, col_end = A - 1;
    int value = 1;
    while (row_start <= row_end && col_start <= col_end)
    {

        // Print row_start
        for (int j = col_start; j <= col_end; j++)
        {
            spiral_arr[row_start][j] = value;
            value++;
        }
        row_start++;

        // Print col_end
        for (int i = row_start; i <= row_end; i++)
        {
            spiral_arr[i][col_end] = value;
            value++;
        }
        col_end--;

        // Print row_end
        for (int j = col_end; j >= col_start; j--)
        {
            spiral_arr[row_end][j] = value;
            value++;
        }
        row_end--;

        //Print col_start
        for (int i = row_end; i >= row_start; i--)
        {
            spiral_arr[i][col_start] = value;
            value++;
        }
        col_start++;
    }
    return spiral_arr;
}