#include "bits/stdc++.h"
using namespace std;

class Graph
{
private:
    int numVertices;
    vector<vector<int>> graph;

public:
    Graph(int n)
    {
        numVertices = n;
        graph.resize(numVertices);
    }
    void addEdge(int n)
    {
        int i, x, y;
        cout << "Enter vertex and edges : " << endl;
        for (i = 0; i < n; i++)
        {
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
    }
    void printGraph(int n)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            cout << i << ": ";
            for (auto j : graph[i])
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    void bsfTraversal(int startVertex)
    {
        vector<bool> visited;
        visited.resize(numVertices, false);
        queue<int> q;
        visited[startVertex] = true;
        q.push(startVertex);
        while (!q.empty())
        {
            startVertex = q.front();
            cout << startVertex << " ";
            q.pop();
            for (auto x : graph[startVertex])
            {
                if (!visited[x])
                {
                    visited[x] = true;
                    q.push(x);
                }
            }
        }
    }
};

int main()
{
    int n, startVertex;
    cout << "Enter number  Vertex : " << endl;
    cin >> n;
    Graph g(1e+7);
    g.addEdge(n);
    cout << "Traversal of Graph :" << endl;
    // g.printGraph(n);
    cout << "Enter Start Vertex  :" << endl;
    cin >> startVertex;
    g.bsfTraversal(startVertex);
    return 0;
}