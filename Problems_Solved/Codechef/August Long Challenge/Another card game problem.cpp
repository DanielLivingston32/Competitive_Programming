// Please have the courtesy to give a star to my repository

#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long int chef, rick;
        cin>>chef>>rick;
        int chef_cnt, rick_cnt;
        if (chef%9==0) {
            chef_cnt = chef/9;
        }
        else {
            chef_cnt = (chef/9)+1;
        }
        if (rick%9==0) {
            rick_cnt = rick/9;
        }
        else {
            rick_cnt = (rick/9)+1;

        }

        if (chef_cnt>=rick_cnt) {
            cout<<1<<" "<<rick_cnt;
        }
        else {
            cout<<0<<" "<<chef_cnt;
        }
        cout<<endl;
    }
}