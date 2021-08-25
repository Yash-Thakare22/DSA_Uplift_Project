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
