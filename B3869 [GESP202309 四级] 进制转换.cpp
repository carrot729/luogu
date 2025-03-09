//B3869 [GESP202309 四级] 进制转换
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const int N=1000009;
char toD(char x){
	if('0'<=x&&x<='9')
		return x-'0';
	return x-'A'+10;
}
ll cF(int x,int n){
	if(n==0) return 1;
	ll tmp=1;
	for(int i=0;i<n;i++){
		tmp*=x;
	}
	return tmp;
}
void f(){
	ll k;
	string num;
	ll ans=0;
	cin>>k>>num;
	ll nS=num.size();
	for(ll i=0;i<nS;i++){
		ll tmp=toD(num[i]);
		ans+=tmp*cF(k,nS-i-1);
	}
	cout<<ans<<endl;
}
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++){
		f();
	}
	return 0;
}

