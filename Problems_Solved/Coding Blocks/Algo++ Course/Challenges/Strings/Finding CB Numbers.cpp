#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

bool checkCbNo(ll no)
{
    if (no == 0 or no == 1)
    {
        return false;
    }
    if (!(no & 1) and no != 2)
    {
        return false;
    }
    for (auto i : arr)
    {
        if (no == i)
        {
            return true;
        }
        if (no % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isVisited(bool visited[], int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (visited[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;

    string input;
    cin >> input;

    string temp;
    int count = 0;
    bool visited[n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j + i < n; j++)
        {

            temp = input.substr(j, i + 1);
            if (checkCbNo(stoll(temp)) && !(isVisited(visited, j, j + i)))
            {
                count++;
                for (int k = j; k <= j + i; k++)
                {
                    visited[k] = true;
                }
            }
        }
    }
    // for(int i=0;i<n;i++){
    // 	cout<<visited[i]<<" ";
    // }
    // cout<<endl;

    cout << count;

    return 0;
}