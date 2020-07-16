#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int discrim = b * b - 4 * a * c;

    if (discrim > 0)
    {
        cout << "Real and Distinct" << endl;
        cout << (-b - sqrt(discrim)) / 2 * a << " " << (-b + sqrt(discrim)) / 2 * a;
    }
    else if (discrim == 0)
    {
        cout << "Real and Equal" << endl;
        cout << (-b + sqrt(discrim)) / 2 * a << " " << (-b + sqrt(discrim)) / 2 * a;
    }
    else
    {
        cout << "Imaginary";
    }
}