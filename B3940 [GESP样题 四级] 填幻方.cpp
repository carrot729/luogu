//B3940 [GESP样题 四级] 填幻方
#include<bits/stdc++.h>
using namespace std;
const int N=29;
int cube[N][N];
int n,x,y,tmp=1;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n;
	x=1; y=n/2;
	cube[x][y]=1;
	while(tmp<n*n){
		tmp++;
		int tmpX=x,tmpY=y;
		if(tmpY<=1) tmpY=n; else tmpY--;
		if(tmpX>=n) tmpX=1; else tmpX++;
		if(cube[tmpX][tmpY]==0) cube[tmpX][tmpY]=tmp;
		else{
			tmpX=x; tmpY=y;
			if(tmpY>=n) tmpY=1; else tmpY++;
			cube[tmpX][tmpY]=tmp;
		}
		x=tmpX; y=tmpY;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<cube[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

