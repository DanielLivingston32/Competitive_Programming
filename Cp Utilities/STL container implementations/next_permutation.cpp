#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// This is the naive approach and it will take a time complexity of O(n*n!)
// This is just the basic approach on how we find permutation.. The STL implementation of the next permutation is given after this
// This is a backtracking approach
void naivePermutePrint(int n, vector<int> arr, vector<int> res = vector<int>())
{
    //Base case
    if (res.size() == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        res.push_back(arr[i]);
        // Storing the current element index and value so that we can remove it and pass it to the recursive call
        int temp = arr[i], temp_idx = i;

        // Removing the current element
        arr.erase(arr.begin() + i);

        // Recursive call
        naivePermutePrint(n, arr, res);

        // Insert the element removed earlier
        arr.insert(arr.begin() + temp_idx, temp);

        // Removing the current element from the result
        res.pop_back();
        // cout<<"CHECK 2"<<endl;
    }

    return;
}

// Implementation of next permutation
template <typename It>
bool next_permutations(It begin, It end)
{
    if (begin == end)
        return false;

    It i = begin;
    ++i;
    if (i == end)
        return false;

    i = end;
    --i;

    while (true)
    {
        It j = i--;

        if (*i < *j)
        {
            It k = end;

            while (!(*i < *--k))
            {
            }

            iter_swap(i, k);
            reverse(j, end);
            return true;
        }

        if (i == begin)
        {
            reverse(begin, end);
            return false;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << endl
         << "Permutations are as follows: " << endl;

    naivePermutePrint(n, arr);
    cout << endl;
    do
    {
        for (auto x : arr)
        {
            cout << x;
        }
        cout << endl;
    } while (next_permutations(arr.begin(), arr.end()));
    for (auto x : arr)
    {
        cout << x;
    }
    cout << endl;
}