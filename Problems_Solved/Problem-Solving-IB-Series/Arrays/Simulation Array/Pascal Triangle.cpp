// Time Complexity: O(A)

vector<vector<int>> Solution::solve(int A)
{
    vector<vector<int>> Pascal;
    vector<int> temp;
    if (A == 0)
    {
        return Pascal;
    }
    int size = 3;
    temp.push_back(1);
    Pascal.push_back(temp);

    if (A == 1)
    {
        return Pascal;
    }
    temp.push_back(1);
    Pascal.push_back(temp);
    if (A == 2)
    {
        return Pascal;
    }
    temp.clear();
    while (size <= A)
    {
        temp.push_back(1);
        int n = Pascal[size - 2].size();
        for (int j = 0; j < n - 1; j++)
        {
            temp.push_back(Pascal[size - 2][j] + Pascal[size - 2][j + 1]);
        }
        temp.push_back(1);
        Pascal.push_back(temp);
        temp.clear();
        size++;
    }
    return Pascal;
}
