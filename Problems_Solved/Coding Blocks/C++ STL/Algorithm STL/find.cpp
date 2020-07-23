#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {3, 68, 48, 10, 75};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Please enter the element to check if it is present in the given array or not:" << endl;
    int key;
    cin >> key;

    auto it = find(arr, arr + n, key);
    cout << it - arr << endl;
    
}