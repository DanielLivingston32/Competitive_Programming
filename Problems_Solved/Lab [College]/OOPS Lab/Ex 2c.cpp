#include<iostream>

using namespace std;

bool findGreaterDigits(int n,int m){
    if(n-m>=0){
        return 1;
    }
    return 0;
}

int main(){
    cout<<"Enter 2 integers: ";
    int n,m;
    cin>>n>>m;
    cout<<(findGreaterDigits(n,m)?"First No is greater":"Second No is greater")<<endl;
}