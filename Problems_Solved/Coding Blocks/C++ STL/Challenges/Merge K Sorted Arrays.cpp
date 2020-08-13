#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<unsigned int> arr;
    unsigned int n, k;
    cin >> n >> k;
    arr.reserve(n * k);
    unsigned int temp;
    for (long long i = 0; i < n * k; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());
    for (long long i = 0; i < n * k; i++)
    {
        cout << arr[i] << " ";
    }
}