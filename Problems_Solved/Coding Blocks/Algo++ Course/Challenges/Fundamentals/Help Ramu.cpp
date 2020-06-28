#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int c1,c2,c3,c4;
        cin>>c1>>c2>>c3>>c4;
        int n,m;
        cin>>n>>m;
        int sum_n,sum_m,temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            sum_n+=min(temp*c1,c2);
        }
        for(int i=0;i<m;i++){
            cin>>temp;
            sum_m+=min(temp*c1,c2);
        }
        int total_cost = min(sum_n,c3) + min(sum_m,c3);
        cout<< min(total_cost,c4)<<endl;
    }
}