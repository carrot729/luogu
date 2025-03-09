//P1002 [NOIP2002 普及组] 过河卒
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=29;
const int INF=10000;
int n,m,x,y;
int dp[N][N];
void input(){
	cin>>n>>m>>x>>y;
}
void solve(){
	dp[0][0]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!i&&!j) continue;
			int maxA=i>0?dp[i-1][j]:0;
			int maxB=j>0?dp[i][j-1]:0;
			dp[i][j]=maxA+maxB;
			dp[x][y]=0;
			if(x>=2){
				if(y>=1) dp[x-2][y-1]=0;
				if(y<=m-1) dp[x-2][y+1]=0;
			}
			if(x>=1){
				if(y>=2) dp[x-1][y-2]=0;
				if(y<=m-2) dp[x-1][y+2]=0;
			}
			if(x<=n-1){
				if(y>=2) dp[x+1][y-2]=0;
				if(y<=m-2) dp[x+1][y+2]=0;
			}
			if(x<=n-2){
				if(y>=1) dp[x+2][y-1]=0;
				if(y<=m-1) dp[x+2][y+1]=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<dp[i][j]<<" ";
			
		}
		cout<<endl;
	}
	cout<<dp[n-1][m-1]<<endl;
}
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	input();
	solve();
	return 0;
}

