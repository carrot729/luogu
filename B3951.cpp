#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e3+9;
ll n,m;
ll h[N];
ll tmp[N];
void change(ll where,ll j){
	cout<<j-where-1<<endl;
	for(ll i=j;i>=where;i--){
		swap(tmp[i],tmp[i-1]);
	}
}
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
    cin>>n;
    for(ll i=0;i<n;i++) cin>>h[i];
    cin>>m;
    for(ll i=1;i<=m;i++){
    	ll x;
    	cin>>x;
    	ll where=upper_bound(tmp,tmp+i,x)-tmp;
    	printf("WHERE==%lld\n",where);
    	tmp[i+1]=x;
    	change(where,i);
	}
	return 0;
}


