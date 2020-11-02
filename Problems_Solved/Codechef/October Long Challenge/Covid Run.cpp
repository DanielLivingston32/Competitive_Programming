#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        vector<int>remainders;
        remainders.push_back(x%n);
        int curr_remain = -1,curr_x=x+k;
        while(curr_remain!=remainders[0]){
            curr_remain = curr_x%n;
            curr_x+=k;
            remainders.push_back(curr_remain);
        }
        auto it = find(remainders.begin(),remainders.end(),y);
        if(it!=remainders.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}