#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool cycleutil(int i, vector<vector<int>> adj, vector<bool>& visited)
{
    visited[i]=true;
    queue<pair<int, int>> q;
    q.push({i, -1});
    while(!q.empty())
    {
        int top= q.front().first;
        int p= q.front().second;
        q.pop();
        for(int j=0;j<adj[top].size();j++)
        {
            if(visited[adj[top][j]]==false)
            {
                visited[adj[top][j]]= true;
                q.push({adj[top][j], top});
            }
            else if(adj[top][j]!=p)
                return true;
        }
    }
    return false;
}


bool isCycle(int V, vector<vector<int>> adj) {
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++)
        visited[i]= false;

    for(int i=0;i<V;i++)
    {
        if(visited[i]== false)
        {
             bool res= cycleutil(i, adj, visited);
             if(res==true)
                return true;
        }
    }
    return false;
}

// Function to add an edge to the graph
void addEdge(vector<vector<int> >& adjList, int u, int v)
{
    adjList[u].push_back(v);
}

int main()
{
    // Number of vertices in the graph
    int vertices = 5;

    // Adjacency list representation of the graph
    vector<vector<int> > adjList(vertices);

    // Add edges to the graph
    addEdge(adjList, 0, 1);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 4);
    addEdge(adjList, 4, 1);

    cout << "\nAdjacency List is as follows:\n ";
    for(int i=0;i<adjList.size();i++)
    {
        cout<<"\n"<<i<<"-> ";
        for(int j=0;j<adjList[i].size();j++)
            cout<<adjList[i][j]<<" ";
    }

    cout<<"\n\noutput="<<isCycle(5, adjList);

    return 0;
}
