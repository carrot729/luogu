//B3959 [GESP202403 四级] 做题
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+9;
int a[N],n;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) 
		cin>>a[i];
	sort(a+1,a+n+1);
	int k=1,m;
	for(m=1;m<=n;m++){
		if(a[m]>=k){
			k++;
//			cout<<m<<endl;	
		} 
	}
	cout<<k-1<<endl;
	return 0;
}

