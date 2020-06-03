// Used sort to compare and appended the result as a string and returned it....
// Time Complexity: O(N Log N)
bool comparatorFunc2(int a, int b)
{
    string x = to_string(a);
    string y = to_string(b);
    string xy = x.append(y);
    string yx = y.append(x);
    return (xy > yx) ? 1 : 0;
}

string Solution::largestNumber(const vector<int> &A)
{
    vector<int> arr = A;
    sort(arr.begin(), arr.end(), comparatorFunc2);
    string res;
    for (int i = 0; i < arr.size(); i++)
    {
        res.append(to_string(arr[i]));
    }
    if (res[0] == '0')
    {
        return "0";
    }
    return res;
}