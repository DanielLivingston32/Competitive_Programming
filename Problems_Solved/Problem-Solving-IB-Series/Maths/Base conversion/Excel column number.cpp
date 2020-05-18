// Interesting approach taught by Abishek sir..https://www.youtube.com/watch?v=8UR9Fwk0xLc . ... Taking 26 as a base to solve this problem beautifully..

int Solution::titleToNumber(string A)
{
    int sum = 0, j = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        sum += (A[i] - 'A' + 1) * pow(26, j);
        j++;
    }
    return sum;
}
