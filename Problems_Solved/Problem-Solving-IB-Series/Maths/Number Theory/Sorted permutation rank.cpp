// For doubts regarding both the approach check Abishek sir's video https://www.youtube.com/watch?v=tZ7ISzMAYds&t=373s..

// Brute force Approach

int Solution::findRank(string A)
{
    string cpy = A;
    sort(cpy.begin(), cpy.end());
    int rank = 1;
    while (true)
    {
        if (cpy == A)
            return rank;
        if (!next_permutation(cpy.begin(), cpy.end()))
        {
            break;
        }

        rank++;
    }
}

//Efficient Approach
int mod = 1000003;

int fact(int n)
{
    if (n <= 1)
        return n;
    return (n * fact(n - 1)) % mod;
}

int Solution::findRank(string A)
{
    int ans = 0;
    for (int i = 0; i < A.size(); i++)
    {
        int cnt = 0;
        for (int j = i + 1; j < A.size(); j++)
        {
            if (A[i] > A[j])
            {
                cnt++;
            }
        }

        ans = (ans + (cnt * fact(A.size() - i - 1)) % mod) % mod;
    }
    return (ans + 1) % mod;
}