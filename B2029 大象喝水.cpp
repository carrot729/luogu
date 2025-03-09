//B2029 ´óÏóºÈË®
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
const double PI=3.14;
int h,r;
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin>>h>>r;
	double v=PI*r*r*h;
	cout<<ceil(20*1000/v)<<endl; 
	return 0;
}

