//B3999 [洛谷 202406GESP 模拟 四级] 锣鼓工厂
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+9;
struct pass{
	int id;
	int value;
};
pass a[N],b[N];
bool cmp(const pass& a,const pass& b){
	return a.value>b.value;
}
void f(){
	int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i].value;
			a[i].id=i;
		}
		for(int i=1;i<=n;i++){
			cin>>b[i].value;
			b[i].id=i;
		}
		sort(a+1,a+n+1,cmp);
		sort(b+1,b+n+1,cmp);
		int tmp=0;
		int c=0,d=0;
		for(int i=1;i<=n;i++){
			c+=a[i].value;
			d+=b[i].value;
		}
		if(c<d){
			cout<<"No"<<endl;
			return;
		}
		cout<<"Yes"<<endl;
		for(int i=1;i<=n;i++){
			cout<<a[i].id<<" ";	
		}
		cout<<endl;
		for(int i=n;i>=1;i--){
			cout<<b[i].id<<" ";	
		}
		cout<<endl;
}
int t;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>t;
	for(int cntmp=0;cntmp<t;cntmp++){
		f();
	}
	return 0;
}

