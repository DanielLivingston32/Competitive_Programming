#include<iostream>

using namespace std;

template<typename T>
class Vector {
    int current_size;
    int maximum_size;
    T *arr;
public:
    Vector() {
        current_size = 0;
        maximum_size = 1;
        arr = new T[maximum_size];
    }

    void push_back(T element) {
        if (current_size==maximum_size) {
            T *oldArr = arr;
            arr = new T[2*maximum_size];
            maximum_size = 2*maximum_size;
            for (int i=0;i<current_size;i++) {
                arr[i]=oldArr[i];
            }
            delete[] oldArr;
        }
        current_size++;
        arr[current_size] = element;
    }

    void pop_back() {
        current_size--;
    }

    int size() const {
        return current_size;
    }

    T front() const {
        return arr[0];
    }

    T back() const {
        return arr[current_size-1];
    }

    int capacity() const {
        return maximum_size;
    }

    bool empty() const {
        return current_size==0;
    }

    T at(const int i) {
        return arr[i];
    }

    T operator [](const int i) {
        return arr[i];
    }


};


int main() {
    Vector<int> s;
    s.push_back(5);
    s.push_back(4);
    s.push_back(3);
    s.push_back(2);
    s.push_back(1);

    cout<<"Capacity of Vector "<<s.capacity()<<" "<<s[2];
    for (int i=0;i<s.size();i++) {
        cout<<"Element: "<<s[i];
    }
}
