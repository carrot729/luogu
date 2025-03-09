#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef unsigned long long ll;
const long long N=1e5+9;
ll a,b,p;
ll MyPow(ll x,ll y){
	if(y==0) return 0;
	if(y==1) return x;
    ll tmp=MyPow(x,y>>1)%p;
	return (y%2?tmp*tmp%p*x:tmp*tmp)%p;
}
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>a>>b>>p;
	printf("%lld^%lld mod %lld=",a,b,p);
	cout<<MyPow(a,b)%p<<endl;
	return 0;
}


