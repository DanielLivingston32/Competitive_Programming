// Convert to string and use 2 pointer method

int Solution::isPalindrome(int A)
{
    string check = to_string(A);
    int left = 0, right = check.size() - 1;
    while (left < right)
    {
        if (check[left] != check[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
