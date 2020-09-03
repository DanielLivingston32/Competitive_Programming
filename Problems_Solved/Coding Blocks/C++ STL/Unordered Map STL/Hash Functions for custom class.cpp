#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Student
{
public:
    string firstName;
    string lastName;
    string rollNo;

    Student(string f, string l, string r)
    {
        firstName = f;
        lastName = l;
        rollNo = r;
    }
};

int main()
{
    Student p1("Fan", "Man", "Tan");
    cout << p1.firstName;
}