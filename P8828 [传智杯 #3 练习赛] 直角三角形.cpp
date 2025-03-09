//P8828 [传智杯 #3 练习赛] 直角三角形
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
typedef int type;
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
int a,b,c;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	c=read();
	c=c*c;
	for(a=1;a*a<=c/2;a++){
		if((int)sqrt(c-a*a)==sqrt(c-a*a)) {
			b=sqrt(c-a*a);break;	
		}
	}
	printf("%i %i\n",a,b);
	return 0;
}

