//P1007 ╤юд╬ге
#include<bits/stdc++.h>
using namespace std;
const int N=5e3+9;
int army[N]; 
int l,n;
int getMax(){
	return max(l+1-army[0],army[n-1]);
}
int getMin(){
	int armyMin[N];
	for(int i=0;i<n;i++){
		armyMin[i]=min(army[i],l+1-army[i]);
	}
	return *max_element(armyMin,armyMin+n);
}
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>l>>n;
	if(n==0){
		cout<<"0 0"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		cin>>army[i];
	}
	sort(army,army+n);
	cout<<getMin()<<" "<<getMax()<<endl;
	return 0;
}

