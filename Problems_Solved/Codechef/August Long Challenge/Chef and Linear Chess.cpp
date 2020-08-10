// Please have the courtesy to give a star to my repository

#include<iostream>
#include<climits>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        long int k;
        cin>>n>>k;
        long int arr[n];
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        long int lowest = INT_MAX;
        long int lowest_key = -1;
        for (int i=0;i<n;i++) {
            if (k%arr[i]==0) {
                if ((k/arr[i])<lowest) {
                    lowest = k/arr[i];
                    lowest_key = arr[i];
                }
            }
        }
        cout<<lowest_key<<endl;
    }
}