#include<iostream>

using namespace std;

int main() {
    cout<<"Choose any one of the given option: "<<endl;
    cout<<"1) Factorial\n2) Sum of all Numbers\n3) Sum of all odd numbers\n4) Exit"<<endl;
    int choice, n, a, b, sum=0, temp;
    long long fact = 1;
    cin>>choice;
    while (choice!=4) {
        switch (choice) {
        case 1:
            cout<<"Enter the no to find factorial: ";
            cin>>a;
            fact =1;
            for (int i=1;i<=a;i++) {
                fact*=i;
            }
            cout<<fact<<endl;
            break;
        case 2:
            cout<<"Enter the total no of values you would be using: ";
            cin>>n;
            cout<<"Enter the values one by one: ";
            sum = 0;
            for (int i=0;i<n;i++) {
                cin>>temp;
                sum+=temp;
            }
            cout<<"Sum of all Numbers is "<<sum<<endl;
            break;
        case 3:
            cout<<"Enter the total no of values you would be using: ";
            cin>>n;
            cout<<"Enter the values one by one: ";
            sum = 0;
            for (int i=0;i<n;i++) {
                cin>>temp;
                if (temp%2==1) {
                    sum+=temp;
                }
            }
            cout<<"Sum of all odd Numbers is "<<sum<<endl;
            break;
        default:
            cout<<"Sorry Invalid input. Try again "<<endl;
        }

        cout<<"\nChoose any one of the given option: "<<endl;
        cout<<"1) Factorial\n2) Sum of all Numbers\n3) Sum of all odd numbers\n4) Exit"<<endl;
        cin>>choice;
    }
}