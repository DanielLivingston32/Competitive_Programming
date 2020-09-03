// #include<iostream>

// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int arr[101]={0};
//         int temp;
//         int maxi = 0;
//         for(int i=0;i<n;i++){
//             cin>>temp;
//             arr[temp]++;
//             maxi = max(maxi,temp); 
//         }
//         cout<<max(maxi*k,k+maxi);

//     }
// }

#include <iostream>
#include <vector>
#include <unordered_map>
#include<bits/stdc++.h>

using namespace std;

int solve(int n, int k, vector<int> &families, int cur_person, vector<int> &Calculation_array){
    if(cur_person>=n){
        return INT_MAX;
    }

    if(Calculation_array[cur_person]!=-1)
        return Calculation_array[cur_person];

    vector<int> families_mapping(101);
    int total_inneficiency=INT_MAX, current_inefficiency=0, least_inefficiency=INT_MAX, returned_inefficiency=INT_MAX;
    for(int i=cur_person; i<n; i++){
        families_mapping[families[i]]++;
        if(families_mapping[families[i]]>=2){
            if(families_mapping[families[i]]==2){
                current_inefficiency+=2;
            }else{
                current_inefficiency++;
            }
        }

        returned_inefficiency = solve(n, k, families, i+1, Calculation_array);
        if(returned_inefficiency!=INT_MAX){
            returned_inefficiency+= current_inefficiency + k;
        }
        if(returned_inefficiency<least_inefficiency){
            least_inefficiency = returned_inefficiency;
        }
    }
    total_inneficiency = current_inefficiency + k;
    Calculation_array[cur_person] = min(least_inefficiency, total_inneficiency);
    return Calculation_array[cur_person];
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        
        int n, k;
        cin>>n>>k;

        vector<int> families(n);
        vector<int> Calculation_array(n, -1);
        for(int i=0; i<n; i++){
            cin>>families[i];
        }

        cout<<solve(n, k, families, 0, Calculation_array)<<endl;
    }
}