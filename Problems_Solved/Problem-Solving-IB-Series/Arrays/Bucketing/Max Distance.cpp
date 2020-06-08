// Refer trapping rain water problem from which i got the intution ...
// Time and space complexity : O(N)
int Solution::maximumGap(const vector<int> &arr)
{
    vector<int> min_arr(arr.size());
    vector<int> max_arr(arr.size());

    int n = arr.size();
    min_arr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        min_arr[i] = min(min_arr[i - 1], arr[i]);
    }

    max_arr[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        max_arr[i] = max(max_arr[i + 1], arr[i]);
    }

    int i = 0;
    int j = 0;
    int ans = 0;
    while (i < n && j < n)
    {
        if (min_arr[i] <= max_arr[j])
        {
            ans = max(ans, j - i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return ans;
}