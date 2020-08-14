#include <iostream>
#include <cmath>

using namespace std;

bool isAmstrong(int n)
{
    int sum = 0;
    int test = n;
    while (test)
    {
        sum += pow(test % 10, 3);
        test /= 10;
    }
    if (sum == n)
        return 1;
    return 0;
}

int main()
{
    cout << "Enter the no to check if amstrong: ";
    int n;
    cin >> n;
    cout << (isAmstrong(n) ? "True" : "False")<<endl;
}