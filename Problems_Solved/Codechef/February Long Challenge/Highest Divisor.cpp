#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int ans = 1;
    for(int i=2;i<11;i++){
        if(n%i==0){
            ans = i;
        }
    }

    return 0;
}