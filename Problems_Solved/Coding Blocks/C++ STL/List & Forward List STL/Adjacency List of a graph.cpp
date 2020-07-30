// The list container is used to for forming a graph network... This technique is called Adjacency List.
#include <iostream>
#include <list>

using namespace std;

int main()
{
    int vertices, n; // n is no of edges / frequency of inputs we are going to take
    cin >> vertices >> n;

    // Purposely making it dynamic allocation for future referance.
    list<pair<int, int>> *l;

    l = new list<pair<int, int>>[n];

    for (int i = 0; i < n; i++)
    {
        int x, y, weight;
        cin >> x >> y >> weight;
        l[x].push_back(make_pair(y, weight));
        l[y].push_back(make_pair(x, weight));
    }

    for (int i = 0; i < vertices; i++)
    {
        cout << "Network Node " << i << ": ";
        for (auto xp : l[i])
        {
            cout << "( " << xp.first << ", " << xp.second << "), ";
        }
        cout << endl;
    }
}