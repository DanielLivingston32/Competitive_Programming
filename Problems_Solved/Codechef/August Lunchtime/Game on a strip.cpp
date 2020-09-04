#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        int temp,cnt=0,curr_max=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp==0){
                curr_max++;
                cnt = max(cnt,curr_max);
            }else{
                curr_max = 0;
            }
        }
        cout<<(cnt&1?"YES":"NO");
    }
}



#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp,cnt=0,curr_max=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp==0){
                curr_max++;
                cnt = max(cnt,curr_max);
            }else{
                curr_max = 0;
            }
        }
        bool start = true;
        checkpoint:
        if(cnt<6){
            cout<<((cnt&1 && start)?"Yes":"No")<<endl;
            continue;
        }else{
            if(cnt&1==0){
                cout<<(start?"Yes":"No")<<endl;
                continue;
            }else{
                cnt = cnt/2;
                start = !start;
                goto checkpoint;
            }
        }
    }
}





if((cnt&1)==0){
            cout<<"No"<<endl;
            continue;
        }
        checkpoint:
        if(cnt<6){
            cout<<((cnt&1 && start)?"Yes":"No")<<endl;
            continue;
        }else{
            if((cnt&1)==0){
                cout<<(!start?"Yes":"No")<<endl;
                continue;
            }else{
                cnt = cnt/2;
                start = !start;
                goto checkpoint;
            }
        }