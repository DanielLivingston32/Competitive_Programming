#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr;
    arr.reserve(n);
    int temp;
    for (int i=0;i<n;i++) {
        cin>>temp;
        arr.push_back(temp);
    }
    int q, value;
    cin>>q;
    while (q--) {
        cin>>value;
        auto it = lower_bound(arr.begin(), arr.end(), value);
        if (*it==value) {
            auto it2 = upper_bound(arr.begin(), arr.end(), value);
            cout<<distance(arr.begin(), it)<<" "<<distance(arr.begin(), (it2-1))<<endl;
        }
        else {
            cout<<-1<<" "<<-1<<endl;
        }
    }
}