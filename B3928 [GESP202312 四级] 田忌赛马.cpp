//B3928 [GESP202312 四级] 田忌赛马
#include<bits/stdc++.h>
using namespace std;
const int N=5e4+9;
int u[N],v[N],n;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>u[i];
	}
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	sort(u+1,u+n+1); sort(v+1,v+n+1);
	int uf=1,vf=1,ud=n,vd=n;
	int ans=0;
	for(int i=0;i<n;i++){
		if(u[uf]>v[vf]){
			ans++;
			uf++;
			vf++;
//			cout<<"###1"<<endl;
		}
		else if(u[ud]>v[vd]){
			ans++;
			ud--;
			vd--;
//			cout<<"###2"<<endl;
		}
//		else if(ud==vf) break;
		else{
//			cout<<"###3:"<<"u[uf]=="<<u[uf]<<"v[vf]=="<<v[vf]<<endl;
			uf++;
			vd--;
			
		}
//		cout<<"***"<<i<<endl;
	}
	cout<<ans<<endl;
	return 0;
}

