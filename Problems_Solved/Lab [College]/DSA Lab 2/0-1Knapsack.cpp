#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int knapsackDp(int n, int prices[], int weight[], int W){
    int result[n+1][W+1];
    
    for (int i = 0; i <= n; i++)  
    { 
        for (int w = 0; w <= W; w++)  
        { 
            if (i == 0 || w == 0) 
                result[i][w] = 0; 
            else if (weight[i - 1] <= w) 
                result[i][w] = max(prices[i - 1] + result[i - 1][w - weight[i - 1]], result[i - 1][w]); 
            else
                result[i][w] = result[i - 1][w]; 
        } 
    } 
  
    return result[n][W]; 
} 


int main()
{
    // Identification
    string collision = "\U0001F4A5";
    string copyright = "️\U000000A9";
    string fire_emoji = "\U0001F525";
    cout << endl
         << endl
         << copyright << " COPYRIGHT" << endl
         << fire_emoji << "DANIEL LIVINGSTON" << fire_emoji << endl
         << collision << "URK19CS2001" << collision << endl
         << endl;
    // End Identification - Program Starts

    int n;
    cout<<"Enter total no. of items: ";
    cin>>n;

    int prices[n];
    cout<<"Enter the prices in order one by one: ";
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }

    int weight[n];
    cout<<"Enter the weights in order one by one: ";
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    int W;
    cout<<"Enter the capacity: ";
    cin>>W;

    cout<<knapsackDp(n,prices,weight,W)<<endl;

    return 0;
}
