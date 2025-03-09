//P4779 【模板】单源最短路径（标准版）
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e4+9;
const int INF=(2<<32)-1;
int G[N][N],n,m,s;
void input(){
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			G[i][j]=INF;
		}
	}
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		G[u][v]=w;
	}
}
bool match1(){
	return n<=5&&m<=15;
}
int dis[N][N];
void solve1(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			dis[i][j]=G[i][j];
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(dis[i][j]>dis[i][k]+dis[k][j])
					dis[i][j]=dis[i][k]+dis[k][j];
			} 
		} 
	}
	for(int i=1;i<=n;i++){
		cout<<dis[s][i]<<" ";
	}
	cout<<endl;
}
void solve(){
	
}
int main(){
	cout<<INF<<endl;
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	input();
	if(match1()) solve1();
	else solve();
	return 0;
}

