// Time Complexity: O(N+k) & Space Complexity: O(N)
#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    long int arr[n];
    long int max_no = 0;
    // Input the value and find maximum element
    for (long int i = 0; i < n; i++)
    {
        cin >> arr[i];
        max_no = max(max_no, arr[i]);
    }
    // Making the frequency array
    long int freq[max_no + 1] = {0};
    // Iterating throught the given array and updating the value of frequency.
    for (long int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    // Suming up each position in the frequency array with the value in the previous position
    for (long int i = 1; i <= max_no; i++)
    {
        freq[i] = freq[i] + freq[i - 1];
    }
    // Storing values in another array called result.
    // If you notice the given array is iterated in reverse in order to maintain stability.
    long int result[n];
    for (long int i = n - 1; i >= 0; i--)
    {
        result[freq[arr[i]] - 1] = arr[i];
        freq[arr[i]]--;
    }
    // Printing the result array.
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}