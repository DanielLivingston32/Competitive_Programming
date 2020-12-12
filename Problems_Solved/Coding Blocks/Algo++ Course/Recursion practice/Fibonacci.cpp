#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

long int nthFibonacciNo(long int n){
    // Base case
    if(n<=1){
        return n;
    }
    // Recursive case
    return nthFibonacciNo(n-1)+nthFibonacciNo(n-2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long int n;
    cin>>n;
    cout<<nthFibonacciNo(n)<<endl;
    return 0;
}