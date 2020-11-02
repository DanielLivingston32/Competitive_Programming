#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i - 1, e = arr[i];
        while (j >= 0 and arr[j] > e)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = e;
    }
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

    cout << "Which Algorithm you want to use?\n1. Selection sort\n2. Insertion Sort\n3. Exit\n";
    int choice;
    cin >> choice;
    int n, temp;

    while (choice != 3)
    {
        cout << "Enter no of elements in array: ";
        cin >> n;

        int arr[n];
        cout << "Enter the array elements in a linear order: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        switch (choice)
        {
        case 1:
            SelectionSort(arr, n);
            cout << "Sorted array is as follows: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 2:
            InsertionSort(arr, n);
            cout << "Sorted array is as follows: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        default:
            cout << "Wrong Choice... Try again...\n";
        }
        cout << "Which Algorithm you want to use?\n1. Selection sort\n2. Insertion Sort\n3. Exit\n";
        cin >> choice;
    }
}
