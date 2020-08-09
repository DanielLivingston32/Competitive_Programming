#include<iostream>
#include<stack>

using namespace std;

int main() {
    int q;
    cin>>q;
    stack<int> price;
    int type, value;
    for (int i=0;i<q;i++) {
        cin>>type;
        if (type==1) {
            if (!price.empty()) {
                cout<<price.top()<<endl;
                price.pop();
            }
            else {
                cout<<"No Code"<<endl;
            }
        }
        else {
            cin>>value;
            price.push(value);
        }
    }
}