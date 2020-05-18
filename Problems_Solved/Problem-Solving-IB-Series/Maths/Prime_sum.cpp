const int N = 16777214;
bool arr[N + 1] = {true};

void prime_sieve(int A)
{
    arr[0] = false;
    arr[1] = false;
    for (int i = 2; i <= A; i++)
    {
        if (arr[i] && (long long)i * i <= A)
        {
            for (int j = i * i; j <= A; j += i)
            {
                arr[j] = false;
            }
        }
    }
}

vector<int> Solution::primesum(int A)
{

    fill_n(arr, N + 1, true);
    prime_sieve(A);
    vector<int> ans;
    for (int i = 2; i <= A; i++)
    {
        if (arr[i] && arr[A - i])
        {
            ans.push_back(i);
            ans.push_back(A - i);
            break;
        }
    }
    return ans;
}
