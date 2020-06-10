// Solution no 1
// Time complexity:O(N Log N).. Space complexity:O(N)
int Solution::repeatedNumber(const vector<int> &A)
{
    vector<int> B = A;
    sort(B.begin(), B.end());
    for (int i = 0; i < B.size() - 1; i++)
    {
        if (B[i] == B[i + 1])
        {
            return B[i];
        }
    }
    return -1;
}

// Time complexity:O(N)... Space Complexity: O(N)

int Solution::repeatedNumber(const vector<int> &A)
{
    vector<int> B(A.size());
    for (int i = 0; i < A.size(); i++)
    {
        if (B[A[i] - 1] == 0)
        {
            B[A[i] - 1]++;
        }
        else
        {
            return A[i];
        }
    }
    return -1;
}