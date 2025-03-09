//B3850 [GESP202306 四级] 幸运数
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const int N=1000009;
int n;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);	
	cin>>n;
	for(int m=0;m<n;m++){
		string num;
		cin>>num;
		ll ans=0;
		int x=num.size();
		for(int i=0;i<x;i++){
			ll tmp=num[i]-'0';
			if((x-i)%2==1){
				tmp*=7;
				while(tmp>9){
					tmp=tmp%10+tmp/10;
				} 
			}
			ans+=tmp;
		}
		if(ans%8==0) cout<<"T"<<endl;
		else cout<<"F"<<endl;
	}
	return 0;
}

