// Got the intution after reading the hint.... Reverse the array make the change and reverse it back...   :)

vector<int> Solution::plusOne(vector<int> &A)
{
    reverse(A.begin(), A.end());
    int j = A.size() - 1;
    A[0] += 1;
    if ((A[0] % 10) != 0)
    {
        while (A[j] == 0)
        {
            A.pop_back();
            j--;
        }
        reverse(A.begin(), A.end());
        return A;
    }
    else
    {
        int i = 0;
        while (true)
        {
            A[i] %= 10;
            if (i == A.size() - 1 && A[i] == 0)
            {
                A.push_back(1);
                break;
            }
            else if (A[i] != 0)
            {
                break;
            }
            else
            {
                i++;
                A[i] += 1;
            }
        }
        j = A.size() - 1;
        while (A[j] == 0)
        {
            A.pop_back();
            j--;
        }
        reverse(A.begin(), A.end());
        return A;
    }
}