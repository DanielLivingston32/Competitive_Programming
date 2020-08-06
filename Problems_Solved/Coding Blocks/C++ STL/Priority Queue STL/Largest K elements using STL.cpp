// The question is to print the largest k elements in a continous input stream when -1 occurs.
// Time complexity: O(n Log K)
#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>

using namespace std;

void query_print(priority_queue<int,vector<int>, greater<int>> pq){
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main(){
    int k;
    cin>>k;
    priority_queue<int, vector<int>, greater<int>> pq;
    int input_no;
    int cnt=0;
    while(scanf("%d",&input_no)!=EOF){
        if(input_no==-1){
            query_print(pq);
        }
        else if(cnt<k){
            pq.push(input_no);
            cnt++;
        }else{
            if(input_no>pq.top()){
                pq.pop();
                pq.push(input_no);
            }
        }
    }
}
