//Easy solution ....

string Solution::convertToTitle(int A)
{
    string map = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans;
    while (A > 0)
    {
        A = A - 1;
        ans = map[A % 26] + ans;
        A = A / 26;
    }
    return ans;
}
