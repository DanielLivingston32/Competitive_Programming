// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);


void _pop(stack<int>s);


 // } Driver Code Ends


//User function Template for C++

/* _push function to insert elements of array to
   stack
*/
stack<int>_push(int arr[],int n)
{
   stack<int> result;
   for(int i=0;i<n;i++){
       result.push(arr[i]);
   }
   return result;
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int> s)
{
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _pop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}

  // } Driver Code Ends