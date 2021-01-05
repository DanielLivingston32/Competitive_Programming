// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux)
    {
        // Base case
        if (N == 0)
        {
            return 0;
        }
        // Recursive case
        int step = 0;
        step += toh(N - 1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        step += toh(N - 1, aux, to, from);
        return step + 1;
    }
};

// { Driver Code Starts.

int main()
{

    int T;
    cin >> T; //testcases
    while (T--)
    {
        long long moves = 0;
        int N;
        cin >> N; //taking input N

        //calling toh() function
        Solution ob;
        moves = ob.toh(N, 1, 3, 2);
        cout << moves << endl;
    }
    return 0;
}

//Position this line where user code will be pasted.  // } Driver Code Ends