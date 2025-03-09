#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e1+9;
int n;
int a[N];
int gcd(int a ,int b){
	if(a<b) swap(a,b);
	if(a%b) return gcd(b,a%b);
	return b;
}
int main(){
#ifdef ONLINE_JUDGE
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
#endif
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	int ans=a[0]*a[1]/gcd(a[0],a[1]);
	for(int i=2;i<n;i++) ans*=a[i]/gcd(ans,a[i]);
	cout<<ans<<endl;
	return 0;
}


