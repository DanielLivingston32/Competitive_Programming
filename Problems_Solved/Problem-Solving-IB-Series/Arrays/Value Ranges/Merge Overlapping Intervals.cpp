//Sorted the array then implemented my logic......

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

vector<Interval> Solution::merge(vector<Interval> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> ans;
    sort(A.begin(), A.end(), compareInterval);
    ans.push_back(A[0]);
    for (int i = 1; i < A.size(); i++)
    {
        if (A[i].start <= ans.back().end)
        {
            ans.back().end = max(A[i].end, ans.back().end);
        }
        else
        {
            ans.push_back(A[i]);
        }
    }
    return ans;
}