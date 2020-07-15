#include <iostream>

using namespace std;

int main()
{
    int min, max, step;
    cin >> min >> max >> step;
    int fahren = (min - 32) * 5 / 9;
    while (min <= max)
    {
        cout << min << " " << fahren << endl;
        min += step;
        fahren = (min - 32) * 5 / 9;
    }
}
