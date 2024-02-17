#include<bits/stdc++.h>

using namespace std;

void bfs(int src,vector<vector<long long> > &graph,vector<long long> &color){
    queue<long long> q;
    color[src] = 0;
    q.push(src);
    while(!q.empty()){
        long long node = q.front();
        q.pop();
        for(auto itr: graph[node]){
            if(color[itr]==-1){
                color[itr] = !color[node];
                q.push(itr);
            }
        }
    }
}
int main()
{
    int n;
    // cout<<"enter n: ";
    cin>>n;

    vector<long long> color(n,-1);
    vector<vector<long long> > graph(n);
    // color[1] = 0;
    // int p = n-1;
    for(int i=1;i<n;i++){
        long long a,b;
        cin>>a>>b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);   
    }

    bfs(0,graph,color);
    
    long long z=0,o=0;
    for(int i=0;i<n;i++){
        color[i]==0 ? z++ : o++;
    }
    
    // cout<<endl;
    long long ans = (z*o);
    ans -= (n-1) ; 
    cout<<ans<<endl;
}