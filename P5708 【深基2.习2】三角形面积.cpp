//P5708 【深基2.习2】三角形面积
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
double a,b,c;
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin>>a>>b>>c;
	double p=(a+b+c)/2,s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<fixed<<setprecision(1)<<s<<endl;
	return 0;
}

