#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

// Comparator for sort function
bool comp(const pair<double, pair<int, int>> &a, const pair<double, pair<int, int>> &b)
{
    if (a.first > b.first)
    {
        return true;
    }
    else if (a.first == b.first && a.second.second < b.second.second)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double fractionalKnapsack(int prices[], int weights[], int n, int c)
{
    // Pair of vector to store itemValue, price and weight.
    vector<pair<double, pair<int, int>>> itemValue;
    double temp;
    for (int i = 0; i < n; i++)
    {
        temp = prices[i] / weights[i];
        itemValue.push_back(make_pair(temp, make_pair(prices[i], weights[i])));
    }

    sort(itemValue.begin(), itemValue.end(), comp);

    // Profit calculation
    int i = 0;
    double profit = 0;
    while (i < n and c > 0)
    {
        if (itemValue[i].second.second <= c)
        {
            profit += itemValue[i].second.first;
            c -= itemValue[i].second.second;
        }
        else
        {
            // Formula that i used here is (capacity/itemWeight)*Profit
            double calc = static_cast<double>(c) / itemValue[i].second.second;
            profit += itemValue[i].second.first * calc;
            c = 0;
        }
        i++;
    }

    return profit;
}

int main()
{
    ios_base::sync_with_stdio(0);

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
    

    cout << "Enter the total no of elements: " << endl;
    int n;
    cin >> n;

    cout << "Enter the capacity of the bag: " << endl;
    int c;
    cin >> c;

    cout << "Enter the prices of n items: " << endl;
    int prices[n];
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cout << "Enter the weights of n items: " << endl;
    int weights[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    cout << "\nMaximum Profit is: " << fractionalKnapsack(prices, weights, n, c) << endl;

    return 0;
}

// Input:
// n = 3
// capacity = 50
// prices = 60 100 120
// weights = 10 20 30