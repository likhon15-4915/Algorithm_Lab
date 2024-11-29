#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <int>v[100];
int vis[100];
void bfs(int source)
{
    for(int i=0; i<100; i++)
    {
        vis[i]=0;
    }
    queue<int>q;
    q.push(source);
    while(!q.empty())
    {

        int x=q.front();
        q.pop();
        if(vis[x]==0)
        {


            vis[x]=1;

           cout<<x<<" ";
            for(int i=0; i<v[x].size(); i++)
            {
                int a=v[x][i];

                if(a&&vis[a]==0)
                {

                    q.push(a);
                }
            }

        }
    }
}

int main()
{

    int m,n,x,y,s;
    cout<<"enter number of nodes and edges"<<endl;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        cin>>x>>y;   //x and y node no
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1; i<=n; i++)
    {
        cout<<"the adjacents list of "<<i<<" -> ";
        cout<<" are ";
        for(int j=0; j<v[i].size(); j++)
        {
            cout<< v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the source node ";
    cin>>s;
    cout<<"the bfs traversal "<<endl;
    bfs(s);
}
