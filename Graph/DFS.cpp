#include "bits/stdc++.h"
using namespace std;

class Graph{
    public:
        int numVertices;
        vector<vector<int>>graph;
       public:
       Graph(int n) {
        numVertices=n;
       graph.resize(numVertices); 
       }
   void addEdge(int n){
     int i,x,y;
     cout <<"Enter Vertex and Edges :  "<<endl;
     for (i=0; i<n; i++){
        cin>>x>>y;
     }
      
   }
};
int main(){
    Graph object(1e+4);
    int n;
    cout <<"Enter number of Vertices: "<<endl;
    cin>>n;

    return 0;

}