// Please have the courtesy to give a star to my repository

#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long int health, power;
        long int total_attack=0;
        cin>>health>>power;
        while (power) {
            total_attack+=power;
            power/=2;
        }
        if (total_attack>=health) {
            cout<<1;
        }
        else {
            cout<<0;
        }
        cout<<endl;
    }
}