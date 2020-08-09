#include<bits/stdc++.h>

using namespace std;

bool Comparator(string& p1, string& p2) {
    //cout<<p1.find(p2)<<" "<<p1<<" "<<p2<<endl;
    if (p1.find(p2)==0) {
        //cout<<"FUNCK "<<(p1.length()<p2.length())<<endl;
        return p1.length()>p2.length();

    }
    return p1<p2;
}

int main() {
    int n;
    cin>>n;
    vector<string> arr;
    arr.reserve(n);
    string temp;
    for (int i=0;i<n;i++) {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end(), Comparator);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }
}