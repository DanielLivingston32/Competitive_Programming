#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        if(k*l<n){
            cout<<-1<<endl;
        }else{
            for(int i=1;i<=n;i++){
                cout<<i%k+1<<" ";
            }
            cout<<endl;
        }
    }
}