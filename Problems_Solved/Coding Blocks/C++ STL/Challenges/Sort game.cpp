#include<iostream>
#include<queue>
#include<string>

using namespace std;

class Employee {
public:
    string name;
    int salary;

    Employee(string name, int salary) {
        this->name = name;
        this->salary = salary;
    }
};

class Comparator {
public:
    bool operator()(Employee& p1, Employee& p2) {
        if (p1.salary==p2.salary) {
            return p1.name>p2.name;
        }
        return p1.salary<p2.salary;
    }
};

int main() {
    int x;
    cin>>x;
    priority_queue<Employee, vector<Employee>, Comparator> p;
    int n;
    cin>>n;
    Employee* temp;
    string temp_string;
    int temp_int;
    for (int i=0;i<n;i++) {
        cin>>temp_string;
        cin>>temp_int;
        temp = new Employee(temp_string, temp_int);
        p.push(*temp);
    }
    while (!p.empty()) {
        Employee temp_p = p.top();
        p.pop();
        if (temp_p.salary>=x) {
            cout<<temp_p.name<<" "<<temp_p.salary<<endl;
        }
        else {
            break;
        }
    }
}