// YOU can understand the intution behind this code by looking at my code

int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    int sum = 0;
    for (int i = 1; i < A.size(); ++i)
    {
        sum += max(abs(A[i] - A[i - 1]), abs(B[i] - B[i - 1]));
    }
    return sum;
}
