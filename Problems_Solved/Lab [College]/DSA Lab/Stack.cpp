#include<iostream>

using namespace std;

template<typename T>
class stack {
    T *arr;
    int cs=0;
    int ms=0;
public:
    stack(int size = 1) {
        cs=0;
        ms=size;
        arr = new T[ms];
    }
    void push(T element) {
        if (cs==ms) {
            cout<<"Overflow Error... Do you want to expand stack size? \nReturn 1 or 0....."<<endl;
            int temp;
            cin>>temp;
            if (temp) {
                T *oldArr = arr;
                arr = new T[2*ms];
                ms = 2*ms;
                for (int i=0;i<cs;i++) {
                    arr[i] = oldArr[i];
                }
                delete[] oldArr;
            }
            else {
                return;
            }

        }
        arr[cs] = element;
        cs++;
    }

    void pop() {
        if (cs==0) {
            cout<<"Underflow Error... Please try again with another option"<<endl;
            return;
        }
        cs--;
    }

    T top() {
        return arr[cs-1];
    }

    bool empty() {
        return cs==0;
    }

    bool full() {
        return cs==ms;
    }

    void display() {
        if (cs==0) {
            cout<<"No elements in stack"<<endl;
            return;
        }
        cout<<"Elements in stack are as follows: ";
        for (int i=0;i<cs;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main() {
    int n;
    cout<<"Enter the default size of the stack: ";
    cin>>n;
    stack<int> s(n);
    cout<<"Choose any one of the given option: "<<endl;
    cout<<"1) Push\n2) Pop\n3) Display\n4) Exit"<<endl;
    int choice, value;
    cin>>choice;
    while (choice!=4) {
        switch (choice) {
        case 1:
            cout<<"Enter the value to be pushed: ";
            cin>>value;
            s.push(value);
            break;
        case 2:
            cout<<"The element which got removed from the stack is "<<s.top()<<endl;
            s.pop();
            break;
        case 3:
            s.display();
            break;
        default:
            cout<<"Sorry Invalid input. Try again "<<endl;
        }
        cout<<"Choose any one of the given option: "<<endl;
        cout<<"1) Push\n2) Pop\n3) Display\n4) Exit"<<endl;
        cin>>choice;

    }

}