#define MOD 1000000007

long long power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long half = power(a, n / 2);
    if (n & 1)
    {
        return (half * half * a) % MOD;
    }

    return (half * half) % MOD;
}

int nthTermOfGP(int N, int A, int R)
{
    int result = (A * power(R, N - 1)) % MOD;
    return result;
}
