#include<iostream>

using namespace std;

template<typename T>
class stack {
    T *arr;
    int cs=0;
    int ms=0;
public:
    stack(int size) {
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
            else{
                return;
            }

        }
        arr[cs] = element;
        cs++;
    }

    void pop() {
        if(cs==0){
            cout<<"Underflow Error...";
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

};

int main() {
    stack<int> s(3);
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

}