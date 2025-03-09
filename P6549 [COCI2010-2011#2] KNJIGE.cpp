#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,a[500001],ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
        cin>>a[i]; 
	ans=n;
	for(int i=n;i;i--)
		if(a[i]==ans)
            ans--; 
	cout<<ans;
 	return 0;
}
