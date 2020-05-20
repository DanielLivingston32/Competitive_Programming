
//Look at the problem for inferance

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int Solution::cpFact(int A, int B)
{
    int x = gcd(A, B);
    if (x == 1)
    {
        return A;
    }
    return cpFact(A / x, B);
}
