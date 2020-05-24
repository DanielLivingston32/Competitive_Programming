// Got the intution after reading GFG article: https://www.geeksforgeeks.org/maximum-absolute-difference-value-index-sums/

int Solution::maxArr(vector<int> &A)
{
    int min1 = INT_MAX, min2 = INT_MAX, max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < A.size(); i++)
    {
        min1 = min(min1, A[i] + i);
        max1 = max(max1, A[i] + i);
        min2 = min(min2, A[i] - i);
        max2 = max(max2, A[i] - i);
    }
    return max(max1 - min1, max2 - min2);
}
