#include<iostream>

using namespace std;

int main(){
    int n,m,k,temp;
    cin>>n>>m>>k;
    int cnt=0;
    int arr[m-1];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>temp;
    for(int i=0;i<n;i++){
        cnt+=(__builtin_popcount(temp^arr[i]));
    }
    cout<<cnt;
}