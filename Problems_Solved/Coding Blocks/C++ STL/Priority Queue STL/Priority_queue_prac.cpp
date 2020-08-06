#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>> pq_min;

    cout<<endl<<"Enter elements for max_heap: ";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        pq.push(temp);
    }
    cout<<endl<<"Enter elements for min_heap: ";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        pq_min.push(temp);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    while(!pq_min.empty()){
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }
    cout<<endl;
}