// Time Complexity: O(N) [Approx]
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    //Take the input of the first array as a vector so that you could perform inplace modification and output the sum
    vector<int> n_arr;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        n_arr.push_back(input);
    }
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    //Reversing the first vector so that i could easly implement addition and also add carry overs ...
    reverse(n_arr.begin(), n_arr.end());

    int carry = 0;
    // If the first array(vector array) is greater than or equal to second array then only time an extra place would be added is when
    // we have carryovers...
    if (n >= m)
    {
        for (int i = 0; i < n; i++)
        {
            if (i < m)
            {
                int temp = n_arr[i];
                temp += arr[m - i - 1] + carry;
                n_arr[i] = temp % 10;
                carry = temp / 10;
            }
            if (carry > 0 && i >= m)
            {
                int temp = n_arr[i];
                temp += carry;
                n_arr[i] = temp % 10;
                carry = temp / 10;
            }
        }
    }
    // As the first array(vector array) is less than the second one we need to add and also push the extra spaces with value onto the first array

    else
    {
        int idx = 0;
        // Here sum occurs till the length of the first array because after which you only need to push the new places with value into the
        // first array
        while (idx < n)
        {
            int temp = n_arr[idx];
            temp += arr[m - idx - 1] + carry;
            n_arr[idx] = temp % 10;
            carry = temp / 10;
            idx++;
        }
        // Here the remaining places with values from the second array is pushed to the first and if there is a carryover that is also handled
        while (idx < m)
        {
            int temp = arr[m - idx - 1];
            temp += carry;
            n_arr.push_back(temp % 10);
            carry = temp / 10;
            idx++;
        }
    }
    // This takes care of any carryover if remaining and pushes/makes changes to the first array
    if (carry > 0)
    {
        while (carry)
        {
            n_arr.push_back(carry % 10);
            carry /= 10;
        }
    }

    // This is a special case to remove no's/result with 0 in front .. For eg: To make 00111 as 111....
    int idx = n_arr.size() - 1;
    while (n_arr[idx] == 0)
    {
        if (n_arr.size() == 1 && n_arr[idx] == 0)
        {
            break;
        }
        n_arr.pop_back();
        idx--;
    }

    // This is the final step to print the result in the required format...
    for (int i = n_arr.size() - 1; i >= 0; i--)
    {
        cout << n_arr[i] << ", ";
    }
    cout << "END";
}