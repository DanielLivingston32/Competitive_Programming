// Time & Space Complexity: O(K)

vector<int> Solution::getRow(int A)
{
    vector<vector<int>> Pascal;
    vector<int> temp;
    int size = 2;
    temp.push_back(1);
    Pascal.push_back(temp);

    if (A == 0)
    {
        return Pascal[0];
    }
    temp.push_back(1);
    Pascal.push_back(temp);
    if (A == 1)
    {
        return Pascal[1];
    }
    temp.clear();
    while (size <= A)
    {
        temp.push_back(1);
        int n = Pascal[size - 1].size();
        for (int j = 0; j < n - 1; j++)
        {
            temp.push_back(Pascal[size - 1][j] + Pascal[size - 1][j + 1]);
        }
        temp.push_back(1);
        Pascal.push_back(temp);
        temp.clear();
        size++;
    }
    return Pascal[A];
}
