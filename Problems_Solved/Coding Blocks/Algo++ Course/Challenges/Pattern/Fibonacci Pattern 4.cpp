#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n*(n+1)/2+2];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<n*(n+1)/2;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	int cnt = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<arr[cnt]<<"\t";
			cnt++;
		}
		cout<<endl;
	}

	return 0;
}