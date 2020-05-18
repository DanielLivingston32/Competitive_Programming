//Naive Solution

// First Solution but got TLE and partially correct as time complexity is O(n^2)

int hammingdistance(int a, int b)
{
    int cnt = 0, differencebit = a ^ b;
    // Here Xor return difference and that is made as a number... For eg 2^5 will become 111 (i.e) stored as 7 which is not what we want..
    // we want the places where it has one meaning the total no of set bit positions which after xor are 1...
    // To calculate this we need it iterate through every bit position and find if it is one using the below method...
    while (differencebit > 0)
    {
        int maskedbit = differencebit & 1;
        // Here you are doing and operator with 0000 0001 so everything before the last set bit will become zero... If the last set bit is 1 then the masked bit
        // will become 0000 0001 else it will become 0000 0000 meaning 0 which we dont want.
        if (maskedbit != 0)
        {
            cnt += 1;
        }
        differencebit = differencebit >> 1;
    }
    return cnt;
}

int Solution::hammingDistance(const vector<int> &A)
{
    int sum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i; j < A.size(); j++)
        {
            sum += hammingdistance(A[i], A[j]);
        }
    }
    return (2 * sum) % 1000000007;
    // Doing times two inorder to avoid similar values.. For eg HammingDistance of [2,4] and [4,2] are the same....
}

// Efficient Approach:

int Solution::hammingDistance(const vector<int> &A)
{
    vector<int> binary_array(32, 0);
    for (int i = 0; i < A.size(); i++)
    {
        int num = A[i], one = 0, zero = 0;
        int index = 0;
        while (num > 0)
        {
            binary_array[index] += (num & 1);
            num = num >> 1;
            index++;
        }
    }
    int ans = 0;
    for (int i = 0; i < binary_array.size(); i++)
    {
        ans = (ans + 2 * binary_array[i] * (A.size() - binary_array[i])) % 1000000007;
    }
    return ans;
}

// Watch this link for the approach https://www.youtube.com/watch?v=Pi6-u7gvQzY&t=3211s  from 39:40....
// Very interesting approach....