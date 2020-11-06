#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void clear(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Linear_insert(int arr[], int n, int data)
{
    int hash_place = data % n;
    if (arr[hash_place] == -1)
    {
        arr[hash_place] = data;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            hash_place = (data + i) % n;
            if (arr[hash_place] == -1)
            {
                arr[hash_place] = data;
                return;
            }
        }
        cout << "Error: Hash Table is full" << endl;
    }
}

void Linear_search(int arr[], int n, int data)
{
    int hash_place = data % n;
    if (arr[hash_place] == data)
    {
        cout << "Position in hash table is " << hash_place << endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            hash_place = (data + i) % n;
            if (arr[hash_place] == data)
            {
                cout << "Position in hash table is " << hash_place << endl;
                return;
            }
        }
        cout << "The given data is not present in the hash table" << endl;
    }
}

void Linear_Probing(int arr[], int n)
{
    int choice;
    cout << "\nChoose one of the options below:\n1. Insert\n2. Search Node\n3. Display\n4. Exit\n";
    cin >> choice;
    int data;
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the data to insert:";
            cin >> data;
            Linear_insert(arr, n, data);
            break;
        case 2:
            cout << "Enter the data to search:";
            cin >> data;
            Linear_search(arr, n, data);
            break;
        case 3:
            display(arr, n);
            break;
        default:
            cout << "\nWrong input given. Choose a correct input";
            break;
        }
        cout << "\nChoose one of the options below:\n1. Insert\n2. Search Node\n3. Display\n4. Exit\n";
        cin >> choice;
    }
    cout << "Do you want to clear the hashtable before leaving to the menu?\nType 1 to clear otherwise type any number: ";
    cin >> choice;
    if (choice == 1)
    {
        clear(arr, n);
    }
    cout << endl;
}

void Quadratic_insert(int arr[], int n, int data)
{
    int hash_place = data % n;
    if (arr[hash_place] == -1)
    {
        arr[hash_place] = data;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            hash_place = (data + i * i) % n;
            if (arr[hash_place] == -1)
            {
                arr[hash_place] = data;
                return;
            }
        }
        cout << "Error: Hash Table is full" << endl;
    }
}

void Quadratic_search(int arr[], int n, int data)
{
    int hash_place = data % n;
    if (arr[hash_place] == data)
    {
        cout << "Position in hash table is " << hash_place << endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            hash_place = (data + i * i) % n;
            if (arr[hash_place] == data)
            {
                cout << "Position in hash table is " << hash_place << endl;
                return;
            }
        }
        cout << "The given data is not present in the hash table" << endl;
    }
}

void Quadratic_Probing(int arr[], int n)
{
    int choice;
    cout << "\nChoose one of the options below:\n1. Insert\n2. Search Node\n3. Display\n4. Exit\n";
    cin >> choice;
    int data;
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the data to insert:";
            cin >> data;
            Quadratic_insert(arr, n, data);
            break;
        case 2:
            cout << "Enter the data to search:";
            cin >> data;
            Quadratic_search(arr, n, data);
            break;
        case 3:
            display(arr, n);
            break;
        default:
            cout << "\nWrong input given. Choose a correct input";
            break;
        }
        cout << "\nChoose one of the options below:\n1. Insert\n2. Search Node\n3. Display\n4. Exit\n";
        cin >> choice;
    }
    cout << "Do you want to clear the hashtable before leaving to the menu?\nType 1 to clear otherwise type any number: ";
    cin >> choice;
    if (choice == 1)
    {
        clear(arr, n);
    }
    cout << endl;
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

    int choice, n;
    cout << "\nHey user,\nEnter the size of the hash table you want to use:\n";
    cin >> n;
    int arr[n];
    clear(arr, n);
    cout << "Enter your choice of hashing techinque:\n1. Linear Probing\n2. Quadratic Probing\n3. Exit" << endl;
    cin >> choice;

    while (choice != 3)
    {
        switch (choice)
        {
        case 1:
            Linear_Probing(arr, n);
            break;
        case 2:
            Quadratic_Probing(arr, n);
            break;
        default:
            cout << "\nWrong input given. Choose a correct input";
            break;
        }
        cout << "Enter your choice of hashing techinque:\n1. Linear Probing\n2. Quadratic Probing\n3. Exit" << endl;
        cin >> choice;
    }

    return 0;
}