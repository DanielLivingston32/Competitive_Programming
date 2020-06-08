// Time complexity: O(N Log N)
// Space Complexity: O(N)

vector<int> Solution::subUnsort(vector<int> &A)
{
    // Make a new array(a copy of array A) to store unsorted value for comparison
    vector<int> sorted = A;

    // Sort the new array
    sort(sorted.begin(), sorted.end());

    bool chkpoint = false;

    vector<int> ans;

    //for(int i=0;i<A.size();i++){
    //    cout<<sorted[i]<<" ";
    //}
    //cout<<endl;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != sorted[i] && chkpoint == false)
        {
            chkpoint = true;
            if (ans.empty() == false)
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(i);
            }
        }
        else if (A[i] == sorted[i] && chkpoint == true)
        {
            ans.push_back(i - 1);
            chkpoint = false;
        }
        else
        {
            continue;
        }
    }

    // Edge case ... This happens when the maximum unsorted array comprise of the last element of the array
    if (ans.size() == 1)
    {
        ans.push_back(A.size() - 1);
    }

    if (ans.size() == 0)
    {
        ans.push_back(-1);
    }
    return ans;
}
