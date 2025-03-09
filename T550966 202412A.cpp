#include<bits/stdc++.h>
#define elif else if
using namespace std;
typedef long long ll;
const long long N=1e5+9;
ll a,b,c,d,x; 
int main(){
//  freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>a>>b>>c>>d>>x;
	cout<<(a<=x)*b+(c<=x)*d<<endl;
	return 0;
}


