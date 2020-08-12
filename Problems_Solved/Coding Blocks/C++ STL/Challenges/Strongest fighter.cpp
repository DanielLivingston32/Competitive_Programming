// I have given 2 solution.. One with Time Complexity: O(K*N) other with Time Complexity: O(K+N)
#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

// Time Complexity: O(K*N)
void kMultipliedNSolution()
{
    long int n, k, temp;
    cin >> n;
    vector<unsigned int> arr;
    arr.reserve(n);
    for (long int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> k;
    deque<unsigned int> sliding_window;
    long int i;
    for (i = 0; i < k; i++)
    {
        sliding_window.push_back(arr[i]);
    }
    cout << *(max_element(sliding_window.begin(), sliding_window.end())) << " ";
    while (i < n)
    {
        sliding_window.pop_front();
        sliding_window.push_back(arr[i]);
        cout << *(max_element(sliding_window.begin(), sliding_window.end())) << " ";
        i++;
    }
}

// Time Complexity: O(K+N)
void kPlusNSolution()
{
    long int n, k;
    unsigned int temp;
    cin >> n;
    vector<unsigned int> arr;
    arr.reserve(n);
    for (long int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> k;
    deque<unsigned int> sliding_window(k);
    long int i;
    //Preprocessing of dequeue
    for (i = 0; i < k; i++)
    {
        // Check elements present in queue and remove the one
        while (!sliding_window.empty() && arr[i] >= arr[sliding_window.back()])
        {
            sliding_window.pop_back();
        }
        sliding_window.push_back(i);
    }
    // Now Iterating the remaining array

    for (i; i < n; i++)
    {
        // Print the first value in the deque... i.e Value for the previous window
        cout << arr[sliding_window.front()] << " ";
        // Remove the elements not in window
        while (!sliding_window.empty() && sliding_window.front() <= i - k)
        {
            sliding_window.pop_front();
        }
        // Removing smaller elements based on the new element added to the window
        while (!sliding_window.empty() && arr[i] >= arr[sliding_window.back()])
        {
            sliding_window.pop_back();
        }

        // Adding new elements
        sliding_window.push_back(i);
    }
    cout << arr[sliding_window.front()] << " ";
}

int main()
{
    kPlusNSolution();
}