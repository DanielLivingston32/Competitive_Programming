#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

class DSU
{
    int *parent;
    int *rank;

public:
    DSU(int V)
    {
        parent = new int[V];
        rank = new int[V];

        for (int i = 0; i < V; i++)
        {
            parent[i] = -1;
            rank[i] = 1;
        }
    }

    int find(int i)
    {
        if (parent[i] == -1)
        {
            return i;
        }
        return parent[i] = find(parent[i]);
    }


    void union_set(int x, int y)
    {
        int s1 = find(x);
        int s2 = find(y);

        if (s1 != s2)
        {
            if (rank[s1] > rank[s2])
            {
                parent[s2] = s1;
                rank[s1] += rank[s2];
            }
            else
            {
                parent[s1] = s2;
                rank[s2] = rank[s1];
            }
        }
    }
};

class Graph
{
    int V;
    vector<vector<int>> edgelist; // {W,X,Y}

public:
    Graph(int V)
    {
        this->V = V;
    }

    void addEdge(int x, int y, int w)
    {
        edgelist.push_back({w, x, y});
    }

    int kruskal_mst()
    {
        // 1. Sorting
        sort(edgelist.begin(), edgelist.end());
        // Initialise DSU
        DSU set(V);

        int ans = 0;
        for (auto edge : edgelist)
        {
            int w = edge[0];
            int x = edge[1];
            int y = edge[2];

            // Take edge and check if it doesn't form a cycle
            if (set.find(x) != set.find(y))
            {
                set.union_set(x, y);
                ans += w;
            }
        }
        return ans;
    }
};

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
    cout << "Cost of Minimum Spanning Tree is: " << G.kruskal_mst() << endl;
    return 0;
}
// G.addEdge(0, 1, 1);
    // G.addEdge(1, 3, 3);
    // G.addEdge(3, 2, 4);
    // G.addEdge(2, 0, 2);
    // G.addEdge(0, 3, 2);
    // G.addEdge(1, 2, 2);