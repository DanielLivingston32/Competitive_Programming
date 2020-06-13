// Time complexity: O(N), Space Complexity:O(N)[Worst Case]
// Got the Logic from Kadane's Algorithm

vector<int> Solution::maxset(vector<int> &A)
{
    long int current_sum = 0;
    long int max_sum = 0;
    vector<int> max_range;
    vector<int> current_range;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] >= 0)
        {
            current_sum += A[i];
            current_range.push_back(A[i]);
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                max_range = current_range;
            }
            else if (current_sum == max_sum)
            {
                if (current_range.size() > max_range.size())
                {
                    max_range = current_range;
                }
            }
            else
            {
                continue;
            }
        }
        else
        {
            current_sum = 0;
            current_range.clear();
        }
    }

    return max_range;
}