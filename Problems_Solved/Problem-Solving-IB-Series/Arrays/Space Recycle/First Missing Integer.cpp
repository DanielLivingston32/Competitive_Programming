// Time and space Complexity: O(N)
int Solution::firstMissingPositive(vector<int> &A)
{
    bool chk[A.size() + 1] = {0};
    int cnt = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > 0 && A[i] <= A.size())
        {
            // FOr edge cases
            if (chk[A[i]] == 1)
            {
                cnt -= 1;
            }
            chk[A[i]] = 1;
            cnt += 1;
        }
    }
    if (cnt == A.size())
    {
        return A.size() + 1;
    }
    for (int i = 1; i < A.size() + 1; i++)
    {
        if (chk[i] == 0)
        {
            return i;
        }
    }
}

// Few edge cases
// [1]  ans: 2
// [1 1 1] ans: 2
