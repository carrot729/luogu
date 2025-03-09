//B3939 [GESP样题 四级] 绝对素数
#include<bits/stdc++.h>
using namespace std;
const int N=1000009;
bool isPrime(int x){
	if(x<2)return 0;
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return 0;
	}
	return 1;
}
int exchangeNum(int x){
	int a=x/10,b=x%10;
	int ans=b*10+a;
	return ans;
} 
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
//		cout<<exchangeNum(i)<<endl;
		if(isPrime(i)&&isPrime(exchangeNum(i))){
			cout<<i<<endl;
		}
	} 
	return 0;
}

