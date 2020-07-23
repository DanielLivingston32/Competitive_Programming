#include<iostream>

using namespace std;

bool compare(int a,int b){
    return a>b;
}

void bubble_sort_with_comparator(int n,int arr[],bool (&cmp)(int a,int b)){
    for(int i=1;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            if(cmp(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    cout<<"Enter no of elements in array: ";
    int n;
    cin>>n;
    cout<<endl<<"Enter the elements one after the other with a space between them"<<endl;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort_with_comparator(n,arr,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}