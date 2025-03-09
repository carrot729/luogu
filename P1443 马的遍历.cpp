#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=4e2+9;
typedef pair<int,int> pl;
queue<pl> que; 
int n,m,x,y;
int ans[N][N];
bool vst[N][N];
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n>>m>>x>>y;
	que.push(pl(x,y));
	ans[x][y]=0;vst[x][y]=1;
	while(!que.empty()){
		pl top=que.front();
		que.pop();
		for(int i=0;i<8;i++){
			int fx=top.first+dx[i];
			int fy=top.second+dy[i];
			if(1>fx||fx>n or 1>fy||fy>m or vst[fx][fy])
				continue;	
			ans[fx][fy]=ans[top.first][top.second]+1;
			vst[fx][fy]=1;
			que.push(pl(fx,fy));
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(ans[i][j] or i==1 and j==1){
				cout<<ans[i][j]<<' ';
				continue;
			}
			cout<<-1<<' ';
		}
		cout<<endl;
	}
	return 0;
}


