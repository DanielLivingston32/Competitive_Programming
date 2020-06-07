// Sort and find the integer... Note: when there are duplicates you should only take the last instance of that digit..
// Time Complexity: O(N Log N)

int Solution::solve(vector<int> &A)
{
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size() - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            continue;
        }
        if (A[i] == A.size() - 1 - i)
        {
            return 1;
        }
    }
    if (A[A.size() - 1] == 0)
    {
        return 1;
    }
    return -1;
}
