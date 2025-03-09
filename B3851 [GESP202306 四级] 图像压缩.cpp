//B3851 [GESP202306 ËÄ¼¶] Í¼ÏñÑ¹Ëõ
#include<bits/stdc++.h>
using namespace std;
const int N=29;
const int H2=259;
const int H=19;
const int HEX=16;
int n;
int image[N][N];
int color[H2];
int cL[H];
char ans[N][N];
int toD(char x){
	if('0'<=x&&x<='9') return x-'0';
	return x-'A'+10;
}
string toH(int x){
	
}
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;i<=n;j++){
			char tmp1,tmp2;
			cin>>tmp1>>tmp2;
			int tmp=toD(tmp1)*HEX+toD(tmp2);
			image[i][j]=tmp;
			color[tmp]++;
		}
	}
	for(int i=0;i<HEX;i++){
		cL[i]=max_element(color,color+HEX*HEX)-color;
		*(color+cL[i])=MIN_INT;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			
		}
	}
	return 0;
}

