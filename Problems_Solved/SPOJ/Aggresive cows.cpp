// Time Complexity: O(NLog N)
#include <iostream>
#include <algorithm>

using namespace std;

bool isPossible(long int arr[], long int n, long int mid, long int c)
{
    // Current variable to store the position of the previous cow
    long int current = arr[0];
    // Iterating through the stall array
    long int cows_placed = 1;
    for (int i = 1; i < n; i++)
    {
        // If c becomes one that means all cows have been places so return true
        if (c == cows_placed)
        {
            return true;
        }
        else
        {
            // Check if the space seperation between the previous placed cow and the current stall is equal to or greater than mid.
            // If it is greater then the current cow and the total cows remaining are updated.
            if (arr[i] - current >= mid)
            {
                current = arr[i];
                cows_placed++;
            }
        }
    }
    if (c == cows_placed)
    {
        return true;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Get input of total no of stalls and cows
        int n, c;
        cin >> n >> c;

        // Get input array of stalls
        long int stalls[n];
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }
        // Sort the stalls array
        sort(stalls, stalls + n);
        // Using binary search to choose the best space seperation for the cows
        long int start = 0;
        long int end = stalls[n - 1] - stalls[0];
        long int mid, ans = -1;
        while (start <= end)
        {
            mid = (start + end) / 2;

            // If this space seperation is valid then update the ans and set the start greater than mid to search for higher possible answers.
            if (isPossible(stalls, n, mid, c))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        cout << ans << endl;
    }
}