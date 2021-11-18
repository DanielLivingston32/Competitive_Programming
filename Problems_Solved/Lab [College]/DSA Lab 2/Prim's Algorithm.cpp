#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

class Graph
{
    // Adjacency list
    int V;
    vector<pair<int, int>> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new vector<pair<int, int>>[V];
    }

    void addEdge(int x, int y, int w)
    {
        l[y].push_back({x, w});
        l[x].push_back({y, w});
    }

    int prim_mst()
    {
        // Init a min heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

        bool *visited = new bool[V]{0};

        int ans = 0;

        Q.push({0, 0}); // W,Node

        while (!Q.empty())
        {
            auto best = Q.top();
            Q.pop();

            int w = best.first;
            int n = best.second;

            if (visited[n])
            {
                // Discard as it is not active edge
                continue;
            }

            // Otherwise
            ans += w;
            visited[n] = 1;

            // Add the new edge to the queue
            for (auto x : l[n])
            {
                if (visited[x.first] == 0)
                {
                    Q.push({x.second, x.first});
                }
            }

            
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);


    cout << "Enter the no of edges: ";
    int n;
    cin >> n;
    cout << "Enter the total no of edges you want to add: ";
    int add;
    cin >> add;

    Graph G(n);

    int w, x, y;

    while (add--)
    {
        cout << "Enter the weight, start edge and end edge: ";
        cin >> w >> x >> y;
        G.addEdge(w, x, y);
    }
    cout << "Cost of Minimum Spanning Tree is: " << G.prim_mst() << endl;
    return 0;
}
// G.addEdge(0, 1, 1);
    // G.addEdge(1, 3, 3);
    // G.addEdge(3, 2, 4);
    // G.addEdge(2, 0, 2);
    // G.addEdge(0, 3, 2);
    // G.addEdge(1, 2, 2);