//B3998 [��� 202406GESP ģ�� �ļ�] С�յļ���
#include<bits/stdc++.h>
using namespace std;
const int N=1000009;
char stk[N];
int n;
int top=0;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		string tmp;
		cin>>tmp;
		if(tmp=="<bs>"){
			top--;
			top=max(0,top); 
		}
		else if('a'<=tmp[0]&&tmp[0]<='z'){
			stk[++top]=tmp[0];
		}
//		cout<<top<<endl;
	}
	for(int i=1;i<=top;i++){
		cout<<stk[i];
	}
	cout<<endl;
	return 0;
}

