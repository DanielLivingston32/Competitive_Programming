#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int freq[100005];
    while(t--){
        long int n;
        cin>>n;
        memset(freq,0,sizeof(freq));
        ll sum=0;
        ll temp;
        freq[0]=1;
        for(int i=0;i<n;i++){
            cin>>temp;
            sum+=temp;
            sum%=temp;
            sum = (sum+n)%n;
            freq[sum]++;
        }
        ll ans = 0;
        for(int i=0;i<n;i++){
            ans+=(freq[i]*freq[i]-1)/2;
        }
        cout<<ans<<endl;

    }

    return 0;
}