#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main(){
    int t;
    while(t--){
        string l,r;
        int k;
        cin>>l>>r>>k;
        vector<vector<int>> ref{{0},{0,1,2,3,4,5,6,7,8,9},{0,2,4,6,8},{0,3,6,9},{0,4,8},{0,5},{0,6},{0,7},{0,8},{0,9}};
        cout<<l<<r<<endl<<k;
        // int cnt=0;
        // bool check=true;
        // for(int i=l;i<=r;i++){
        //     while(i){
        //         if((i%10)%k==0){
        //             i/=10;
        //         }else{
        //             check=false;
        //             break;
        //         }
        //     }
        //     if(check){
        //         cnt++;
        //     }
        // }
        // cout<<cnt;
    }

}