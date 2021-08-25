//5
// 1 3
// 2 4
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

0->1->2
0 1
1 2
 v[0].push_back[1];

int main()
{
    int nodes,edges;
    cin>>nodes;
    cin>>edges;
    
    int u,v;
    
    vector<int>adj[nodes];
    
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v); //grap[1][2]=1;
        //adj[v].push_back(u); //graph[2][1]=1;
    }
    
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->";
        for(auto x:adj[i])
        cout<<x<<"->";
        
        cout<<endl;
    }
    return 0;
}

// TREE_ BFS
void bfs(Node *root)
{
    queue<Node*>q;
    q.push(root);
    
    while(q.empty()==false)
    {
        Node *f=q.front();
        q.pop();
        
        cout<<f->data<<" ";
        
        if(f->left!=NULL)
        q.push(f->left);
        
        if(f->right!=NULL)
        q.push(q->right);
    }
}


// GRAPH - BFS

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[], int nodes)
{
    queue<int>q;
    q.push(0);
    
    int visited[nodes]={0};
    visited[0]=1;
    
    while(q.empty()==false)
    {
        int f=q.front();
        q.pop();
        
        cout<<f<<" ";
        
        for( auto x: adj[f])
        {
            if(visited[x]!=1)
            {
                q.push(x);
                visited[x]=1;
            }
        }
    }
}

int main()
{
    int nodes,edges;
    cin>>nodes;
    cin>>edges;
    
    int u,v;
    
    vector<int>adj[nodes];
    
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v); //grap[1][2]=1;
        //adj[v].push_back(u); //graph[2][1]=1;
    }
    
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->";
        for(auto x:adj[i])
        cout<<x<<"->";
        
        cout<<endl;
    }
    
    bfs(adj,nodes);
    return 0;
}


// DFS GRAPH
https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/

