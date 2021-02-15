// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}// } Driver Code Ends


//function Template for C++

queue<int> rev(queue<int> q)
{
    stack<int> revStack;
    while(!q.empty()){
        revStack.push(q.front());
        q.pop();
    }
    while(!revStack.empty()){
        q.push(revStack.top());
        revStack.pop();
    }
    return q;
}