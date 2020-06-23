#include<iostream>

using namespace std;

void bubbleSort(long int arr[],long int n){
    for(int itr=1;itr<n;itr++){
        for(int j=0;j<=n-itr-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    long int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}