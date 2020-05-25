//Naive approach and might fail for larger test cases

vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    int a, b;
    vector<int> ans;
    vector<int> copy;
    copy = A;
    sort(copy.begin(), copy.end());
    for (int i = 0; i < copy.size() - 1; i++)
    {
        if (copy[i] == copy[i + 1])
        {
            a = copy[i];
            continue;
        }
        if (copy[i] + 1 != copy[i + 1])
        {
            b = copy[i] + 1;
            continue;
        }
    }
    if (copy[0] != 1)
    {
        b = 1;
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

// O(n) time and O(n) space approach

vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    int arr[A.size() + 1] = {0};
    vector<int> ans;
    int a, b;
    for (int i = 0; i < A.size(); i++)
    {
        arr[A[i]] += 1;
    }
    for (int i = 1; i < A.size() + 1; i++)
    {
        if (arr[i] == 0)
        {
            b = i;
        }
        if (arr[i] == 2)
        {
            a = i;
        }
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

// O(n) time and o(1) space can be done using Mathematical calculations and bit manupulation