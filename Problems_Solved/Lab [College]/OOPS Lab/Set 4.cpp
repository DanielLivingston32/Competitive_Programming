#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        int cnt=0;
        while (cnt<n-i) {
            cout<<"\t";
            cnt++;
        }
        int size = 2*(i-1)+1;
        int j=i;
        int idx=0;
        bool reversed=false;
        while (j>=i) {
            if (idx==size/2) {
                cout<<j<<"\t";
                j--;
                reversed=true;
            }
            else if (reversed) {
                cout<<j<<"\t";
                j--;
            }
            else {
                cout<<j<<"\t";
                j++;
            }
            idx++;
        }
        cout<<endl;
    }
}