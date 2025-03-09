//B3958 [GESP202403 ËÄ¼¶] ÏàËÆ×Ö·û´®
#include<bits/stdc++.h>
using namespace std;
const int N=1000009;
string a,b;
void f(){
	cin>>a>>b;
	int aS=a.size(),bS=b.size();
	if(abs(aS-bS)>1){
		cout<<"not similar"<<endl;
		return;
	}
	int aP=0,bP=0;
	bool flag=0;
	while(aP<=aS-1||bP<=bS-1){
		if(a[aP]!=b[bP]){
			if(flag){
				cout<<"not similar"<<endl;
				return;
			}
			flag=1;
			if(aS>bS) aP++;
			else if(aS<bS) bP++;
			else {
				aP++;
				bP++;
			}
		}
		else{
			aP++;
			bP++;
		}
	}
	cout<<"similar"<<endl;
}
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	int t;
	cin>>t;
	for(int i=0;i<t;i++) f();
	return 0;
}

