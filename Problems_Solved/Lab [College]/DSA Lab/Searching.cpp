#include <iostream>

using namespace std;

int linearSearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int a[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // Identification
    string collision = "\U0001F4A5";
    string copyright = "️\U000000A9";
    string fire_emoji = "\U0001F525";
    cout << endl
         << endl
         << copyright << " COPYRIGHT" << endl
         << fire_emoji << "DANIEL LIVINGSTON" << fire_emoji << endl
         << collision << "URK19CS2001" << collision << endl
         << endl;
    // End Identification - Program Starts

    cout << "Which Algorithm you want to use?\n1. Linear Search\n2. Binary Search[You should give a sorted array]\n3. Exit\n";
    int choice;
    cin >> choice;

    while (choice != 3)
    {
        cout << "Enter no of elements in array: ";
        int n;
        cin >> n;
        int arr[n], key, res;
        cout << "Enter the array elements in a linear order: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter the element you want to search: ";
        cin >> key;
        if (choice == 1)
        {
            res = linearSearch(arr, n, key);
            cout << (res == -1 ? "Element not found" : "Element is found in index " + to_string(res)) << endl;
        }
        else
        {
            res = binarySearch(arr, n, key);
            cout << (res == -1 ? "Element not found" : "Element is found in index " + to_string(res)) << endl;
        }
        cout << "Which Algorithm you want to use?\n1. Linear Search\n2. Binary Search[You should give a sorted array]\n3. Exit\n";
        cin >> choice;
    }
}