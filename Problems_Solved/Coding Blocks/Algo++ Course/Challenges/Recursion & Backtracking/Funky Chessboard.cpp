#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int sum,board[10][10],high = 0;

void findMoves(int i,int j,int n,int currentMove){
    if(i<0 or i>=n or j<0 or j>=n or board[i][j]==0){
        return;
    }
    // Unset current position
    board[i][j] = 0;
    // Calculate current high
    high = max(high,currentMove+1);
    // Try all possible 8 positions
    findMoves(i-1,j-2,n,currentMove+1);
    findMoves(i-2,j-1,n,currentMove+1);
    findMoves(i+1,j-2,n,currentMove+1);
    findMoves(i+2,j-1,n,currentMove+1);
    findMoves(i-1,j+2,n,currentMove+1);
    findMoves(i-2,j+1,n,currentMove+1);
    findMoves(i+1,j+2,n,currentMove+1);
    findMoves(i+2,j+1,n,currentMove+1);
    // Backtracking
    board[i][j] = 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    sum = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
            if(board[i][j]){
                sum++;
            }
        }
    }

    findMoves(0,0,n,0);
    cout<<sum-high<<endl;

    return 0;
}