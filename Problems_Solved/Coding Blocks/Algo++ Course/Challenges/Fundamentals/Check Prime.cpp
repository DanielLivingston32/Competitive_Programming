#include<iostream>
#include<cmath>


using namespace std;

int main(){
    long int no;
    cin>>no;
    for(int i=2;i<sqrt(no);i++){
        if(no % i == 0){
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime";
}