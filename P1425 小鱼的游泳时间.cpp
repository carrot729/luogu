//P1425 小鱼的游泳时间
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
int a,b,c,d,e,f; 
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin>>a>>b>>c>>d;
	e=c-a;
	f=d-b;
	if(f<0){
		e--;
		f+=60;
	}
	cout<<e<<" "<<f<<endl;
	return 0;
}

