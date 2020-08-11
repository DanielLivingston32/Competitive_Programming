#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    vector<char> str;
    char a;
    while (cin>>a) {
        str.push_back(a);
    }
    sort(str.begin(), str.end());
    do {
        for (int i=0;i<str.size();i++) {
            cout<<str[i];
        }
        cout<<endl;
    } while (next_permutation(str.begin(), str.end()));
}