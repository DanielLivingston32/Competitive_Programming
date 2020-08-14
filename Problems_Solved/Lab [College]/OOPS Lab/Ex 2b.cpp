#include <iostream>
#include <cmath>

using namespace std;

double squareOfFloat(float &no)
{
    return pow(no, 2);
}

long int cubeOfInteger(int &n)
{
    return pow(n, 3);
}

int main()
{
    int n;
    float fn;
    cout << "Enter one integer and float no: ";
    cin >> n >> fn;
    cout << cubeOfInteger(n) << endl;
    cout << squareOfFloat(fn) << endl;
}