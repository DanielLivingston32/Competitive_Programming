#include <bits/stdc++.h>

#define ll long long
#define INF 10000

using namespace std;

vector<vector<int>> floyd_warshall(vector<vector<int>> graph)
{
    vector<vector<int>> dist(graph);

    int V = graph.size();

    // Go through all the phases including vertices (1...k) as intermediate vertices.
    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                // If k is included and we can minimise the distance.
                if (dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    return dist;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int N;
    cout << "Enter size of the graph: ";
    cin >> N;
    cout << "Enter the graph value one by one:\nInstead of Infinity enter 10000\n";

    vector<vector<int>> graph;

    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
        int tempi;
        for (int j = 0; j < N; j++)
        {
            cin >> tempi;
            temp.push_back(tempi);
        }
        graph.push_back(temp);
    }

    cout << "\n\nResultant Matrix:\n";

    auto result = floyd_warshall(graph);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result.size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Input:
// {0, 10000, -2, 10000},
// {4, 0, 3, 10000},
// {10000, 10000, 0, 2},
// {10000, -1, 10000, 0}

// Expected Output
// 0 -1 -2 0
// 4 0 2 4
// 5 1 0 2
// 3 -1 1 0