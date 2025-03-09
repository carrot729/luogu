//P5705 【深基2.例7】数字反转
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
string s;
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin>>s;
	for(int i=s.size()-1;i>=0;i--) cout<<s[i];
	cout<<endl;
	return 0;
}

