#include<iostream>
#include<cmath>
#include<string>

using namespace std;

bool amstrongNo(long int no, int n){
    long long sum;
    long int temp = no;
    while(temp){
        sum+= pow(temp%10,n);
        temp/=10;
    }
    if(sum==no){
        return true;
    }else{
        return false;
    }
}

int main(){
    string number;
    cin>>number;
    if(amstrongNo(stoi(number), number.length())){
        cout<<"true";
    }else{
        cout<<"false";
    }

}