//This is my approach got it after viewing the hint and solution approach

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<Interval> ans;

    if (intervals.size() == 0)
    {
        ans.push_back(newInterval);
        return ans;
    }

    int inserted = 0;

    for (int i = 0; i < intervals.size(); i++)
    {
        if (intervals[i].end < newInterval.start)
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            if (newInterval.end < intervals[i].start && inserted == 0)
            {
                ans.push_back(newInterval);
                ans.push_back(intervals[i]);
                inserted = 1;
            }
            else if (newInterval.end > intervals[i].start)
            {
                Interval temp;
                temp.start = min(intervals[i].start, newInterval.start);
                temp.end = max(intervals[i].end, newInterval.end);
                if (inserted == 0)
                {
                    ans.push_back(temp);
                }
                else
                {
                    ans.back() = temp;
                }
                newInterval = temp;
                inserted = 1;
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }
    }
    if (!inserted && ans.back().end < newInterval.start)
        ans.push_back(newInterval);
    return ans;
}
