#include <bits/stdc++.h>

using namespace std;
template <typename T>

class graph
{
public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool direction)
    {
        // direction == 1 then directed graph otherwise not a directed graph
        adj[u].push_back(v);
        if (!direction)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    graph<int> g;
    int n;
    cout << "Enter number of nodes" << endl;
    cin >> n;

    int m;
    cout << "Enter number of Edges" << endl;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0); // undirected graph
    }

    g.printAdjList();

    return 0;
}