//B2001 入门测试题目
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
typedef ll type;
inline type read(){
    bool f=1;type x=0;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-') f=!f;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}
    return (f?x:-x);
}
inline void write(type x){
    if(x<0) putchar('-'),x=-x;
    if(x>9) write(x/10);
    putchar(x%10+'0');return;
}
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	ll a,b;
	a=read();b=read();
	write(a+b);
	return 0;
}

