#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        if(i==1){
            cout<<"1"<<endl;
        }else{
            cout<<i-1;
            int cnt=2;
            while(cnt<i){
                cout<<"0";
                cnt++;
            }
            cout<<i-1;
            cout<<endl;
        }
	}
}