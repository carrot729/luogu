#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e4+9,INF=1e9+9;
ll n,m,s; 
ll G[N][N];
ll pre[N],ans[N];
bool isOK[N];
void Dijkstra(int x){
	ll min_node=INF;
	for(ll i=1;i<=n;i++){
		if(i==x) continue;
		if(G[x][i]){
			ans[i]=min(ans[i],ans[x]+G[x][i]);
			min_node=G[x][min_node]
		}
	}
	
}
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n>>m>>s;
	for(int i=0;i<m;i++) {
		ll u,v,w;
		cin>>u>>v>>w;
		G[u][v]=min(w,G[u][v]);
		G[v][u]=min(w,G[v][u]);
	}
	isOK[s]=1;
	for(int i=1;i<=n;i++){
		if(!G[s][i]) ans[i]=INF;
	}
	Dijkstra(s);
	return 0;
}


