// Time & Space Complexity: O(N^2)

vector<vector<int>> Solution::diagonal(vector<vector<int>> &A)
{
    int n = A.size();
    int m = A[0].size();
    vector<vector<int>> ans;
    vector<int> temp;

    // To add elements till the main diagonal
    for (int j = 0; j < m; j++)
    {
        int temp_i = 0, temp_j = j;
        while (temp_i <= j && temp_j >= 0)
        {
            temp.push_back(A[temp_i][temp_j]);
            temp_i++;
            temp_j--;
        }
        ans.push_back(temp);
        temp.clear();
    }

    // To add elements after main diagonal
    for (int i = 1; i < n; i++)
    {
        int temp_i = i, temp_j = m - 1;
        while (temp_i < n && temp_j >= 0)
        {
            temp.push_back(A[temp_i][temp_j]);
            temp_i++;
            temp_j--;
        }
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
}
