//This solution is a modified version of Kadane's Algorithm...

vector<int> Solution::flip(string A)
{
    vector<int> ans;
    long long sum_so_far = 0, sum_ending_here = 0;
    int j = 0, start = -1, end = -1;
    for (int i = 0; i < A.size(); i++)
    {
        sum_ending_here += (A[i] == '1') ? -1 : 1;
        if (sum_so_far < sum_ending_here)
        {
            sum_so_far = sum_ending_here;
            start = j;
            end = i;
        }
        if (sum_ending_here < 0)
        {
            j = i + 1;
            sum_ending_here = 0;
        }
    }
    if (sum_so_far)
    {
        ans.push_back(start + 1);
        ans.push_back(end + 1);
    }
    return ans;
}