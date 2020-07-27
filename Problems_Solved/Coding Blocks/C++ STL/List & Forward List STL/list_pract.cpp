#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> list1{"apple", "bananna", "Kiwi"};
    cout << list1.front() << " " << list1.back() << endl;
    list1.push_back("Mango");
    list1.sort();

    for (string s : list1)
    {
        cout << s << " ";
    }
    cout << endl;

    list1.pop_back();
    cout << list1.back() << endl;
    list1.push_front("Tomatto");
    list1.reverse();

    for (string s : list1)
    {
        cout << s << " ";
    }
}