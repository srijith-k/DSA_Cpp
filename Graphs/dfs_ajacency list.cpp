
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Function to perform Breadth First Search on a graph
// represented using adjacency list
void dfs(vector<vector<int> >& adjList, int startNode,
         vector<bool>& visited)
{
    visited[startNode]= true;
    cout<<startNode<<" ";
    for(int i=0;i<adjList[startNode].size();i++)
    {
        if(!visited[adjList[startNode][i]])
            dfs(adjList, adjList[startNode][i], visited);
    }
}

// Function to add an edge to the graph
void addEdge(vector<vector<int> >& adjList, int u, int v)
{
    adjList[u].push_back(v);
}

int main()
{
    // Number of vertices in the graph
    int vertices = 6;

    // Adjacency list representation of the graph
    vector<vector<int> > adjList(vertices);

    // Add edges to the graph
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 3, 5);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 2, 4);

    cout << "\nAdjacency List is as follows:\n ";
    for(int i=0;i<adjList.size();i++)
    {
        cout<<"\n"<<i<<"-> ";
        for(int j=0;j<adjList[i].size();j++)
            cout<<adjList[i][j]<<" ";
    }

    // Mark all the vertices as not visited
    vector<bool> visited(vertices, false);

    // Perform BFS traversal starting from vertex 0
    cout << "\n\nBreadth First Traversal starting from vertex "
            "0: ";
    dfs(adjList, 0, visited);

    return 0;
}
