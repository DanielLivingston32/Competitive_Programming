#include<iostream>

using namespace std;

long int binPow(int base, int expo)
{
    int a = base, ans = 1;
    while (expo)
    {
        if (expo & 1)
        {
            ans *= a;
        }
        a *= a;
        expo = expo >> 1;
    }
    return ans;
}

long int binPowRecursive(int base,int expo){
    if(expo==1){
        return base;
    }
    long int res = binPowRecursive(base,expo/2);
    if(expo%2==0){
        return res*res;
    }else{
        return res*res*base;
    }
}
int main(){
    int n,p;
    cin>>n>>p;
    binPowRecursive(n,p);
}