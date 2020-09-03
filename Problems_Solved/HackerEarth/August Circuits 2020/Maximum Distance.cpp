#include<iostream>

using namespace std;

int main(){
    long int n;
    cin>>n;
    int arr[n];
    for(long int i=0;i<n;i++){
        cin>>arr[i];
    }
    int queries;
    cin>>queries;
    int choice,L,R,x,y,z;
    while(queries--){
        cin>>choice;
        switch(choice){
            case 1:
                cin>>L>>R>>x;
                for(int i=L;i<=R;i++){
                    arr[i]+=x;
                }
            case 2:
                cin>>L>>R>>y;
                for(int i=L;i<=R;i++){
                    arr[i]*=y;
                }
            case 3:
                int first_idx = -1;
                int max_distance = -1;
                for(int i=0;i<n;i++){
                    if(arr[i]==z){
                        if(first_idx==-1){
                            first_idx = i;
                        }else{
                            max_distance = max(max_distance,i-first_idx+1);
                        }
                    }
                }
                cout<<max_distance<<endl;


        }
    }
    
}