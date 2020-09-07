// This is Abhishek Verma Explanation to this problem.. Read this to understand the approach

// Regarding the "update" : I feel the game is better defined in terms of loser. The person who fails to make a move loses, and hence, making the other one winner.

// Let me take an example to demonstrate why popcount(n-1)&1 works. It might seem trivial, yet, please bear with me ! Suppose N=1101001100(binary), then the operations will be :

// ------------------- N is not power of 2 ----------------------
// N = 1101001100          Louise will reduce it by 1000000000
// N =  101001100          Richard will reduce it by 100000000
// N =    1001100          Louise will reduce it by    1000000
// N =       1100          Richard will reduce it by      1000

// ------------------- N(100) is power of 2 ----------------------
// N =        100          Louise will reduce counter by half
// N =        10           Richard will reduce counter by half
// N =        1            Louise can't make a move, hence, loses
//                         Richard is the winner !
// The above example shows that N=1101001100 can be better represented as "1101001100", where we need to count "1s to the left of 1" and "0s to the right of 1", to know the total number of operations.

// Thus, total number of operations = 4 (1s in 1101001) + 2 (0s in 100) = 6. Since, this number (6) is even, hence, Richard wins.

// This is all that is required to know the answer, but, as you can see, this forces us to do calculation in two parts : counting 1s and counting 0s.

// Somehow, if we could modify the "100" part of "1101001100" to "011" thus changing the number to "1101001011", all we would need is to count 1s in this number i.e. setBits in the number.

// This final requirement to flip all trailing 0s to 1s and last 1 to 0 (without modifying the other bits), can be easily achieved by subtracting 1 from the number N. For N=1101001100, we have N-1 = 1101001011. Thus popcount(N-1) gives the number of operations in the game, which gives winner depending upon if its even or odd.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    int t;
    cin >> t;
    while (t--)
    {
        scanf("%ld", &n);
        if (__builtin_popcountl(n - 1) % 2 == 0)
        {
            cout << "Richard" << endl;
        }
        else
        {
            cout << "Louise" << endl;
        }
    }
}
