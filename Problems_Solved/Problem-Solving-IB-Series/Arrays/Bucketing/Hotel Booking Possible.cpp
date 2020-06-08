// The intuition behind this approach is as follows:
//  Sort both arrival and departure...
//  Then check if ith guest left before (i+k)th guest arrives..
//  If this is false then return false as there wouldnt be enough rooms for the (i+k)th person to stay
// Time Complexity: O(N)(approx)

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K)
{
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    for (int i = 0; i < arrive.size() - K; i++)
    {
        if (depart[i] > arrive[i + K])
        {
            return false;
        }
    }
    return true;
}
