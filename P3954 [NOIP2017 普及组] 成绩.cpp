#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
int a,b,c;
void input(){
	cin>>a>>b>>c;
}
bool match1(){
	return a==0&&b==0;
}
void solve1(){
	cout<<(int)(c*0.5)<<endl;
}
bool match2(){
	return a==100&&b==100;
}
void solve2(){
	cout<<20+30+(int)(c*0.5)<<endl;
}
void solve(){
	cout<<(int)(a*0.2)+(int)(b*0.3)+(int)(c*0.5)<<endl;
}
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	input();
	if(match1()) solve1();
	else if(match2()) solve2();
	else solve();
	return 0;
}

