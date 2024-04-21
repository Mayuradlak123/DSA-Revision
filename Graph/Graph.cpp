#include <iostream>
#include <vector>

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
    void addEdge(int n, int m)
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
};
int main()
{
    Graph object(1e+5);
    cout << "Enter size Number of Vertex and Edges : " << endl;
    int n, m;
    cin >> n >> m;
    object.addEdge(n,m);
    cout <<" These are Graph Vertex and Edges: "<<endl;
    object.printGraph(n);
    return 0;
}
