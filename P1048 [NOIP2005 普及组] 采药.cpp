#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
int T,M;
int f[N];
int main(){
#ifndef LOCAL
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
#endif
    cin>>T>>M;
    for(int i=1;i<M;i++){
    	int t,v;
    	cin>>t>>v;
    	for(int j=T;j>=t;j--){
    		f[j]=max(f[j-t]+v,f[j]);
		}
	}
	cout<<f[T]<<endl;
	return 0;
}


