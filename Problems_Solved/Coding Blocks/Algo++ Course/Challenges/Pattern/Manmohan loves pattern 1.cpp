#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==1){
			int cnt=0;
			while(cnt<i){
				cout<<"1";
				cnt++;
			}
			cout<<endl;
		}else{
			cout<<"1";
			int cnt=1;
			while(cnt<i-1){
				cout<<"0";
				cnt++;
			}
			cout<<"1"<<endl;
		}
	}
	return 0;
}