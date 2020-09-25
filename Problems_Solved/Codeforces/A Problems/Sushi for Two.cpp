#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    int curr_1 = (arr[0]==1?1:0),curr_2 = (arr[0]==2?1:0);
    int max_1 = curr_1,max_2 = curr_2;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            curr_1++;
            max_1 = max(curr_1,max_1);
            curr_2 = 0;
        }else{
            curr_2++;
            max_2 = max(curr_2,max_2);
            curr_2 = 0;
        }
    }
    cout<<min(max_1,max_2)*2<<endl;
    return 0;
}