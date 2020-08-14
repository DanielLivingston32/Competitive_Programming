#include<iostream>

using namespace std;

int noOfDigits(int n,int sum=0){
    if(n==0){
        return sum;
    }
    noOfDigits(n/10,++sum);
}

int main(){
    cout<<"Enter the digit: ";
    int n;
    cin>>n;
    cout<<noOfDigits(n)<<endl;
}