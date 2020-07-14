#include <iostream>

using namespace std;

int main()
{
    long int no;
    int check_no, cnt = 0;
    cin >> no >> check_no;
    while (no)
    {
        if (no % 10 == check_no)
        {
            cnt++;
        }
        no /= 10;
    }
    cout << cnt;
}