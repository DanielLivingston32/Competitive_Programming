int Solution::gcd(int A, int B)
{
    return B ? gcd(B, A % B) : A;
}