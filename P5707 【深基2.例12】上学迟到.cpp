#include <cstdio>
int main()
{
	int S;//家到学校的距离 
	int V;//行走的速度 
	scanf("%d%d",&S,&V);
	int t;
	if(S%V==0)//因为后面是从07：59开始的,所以这里的时间少一分钟 
	{
		t=S/V;
		t+=9;//垃圾分类的时间 
	}
	else
	{
		t=S/V;//时间如果不能被速度整除,就要提前一分钟出发 
		t+=10;//垃圾分类的时间 
	}
	int H;//保存出发的小时,分钟 
	int M;
	H=7;
	M=59;
	while(t!=0) 
	{
		if(M!=0)
		{
			M--;
		}
		else
		{
			if(H!=0)
			{
				H--;
				M=59;
			}
			else
			{
				H=23;
				M=59;
			}
		}
		t--;
	}
	int h1,h2;//分开保存小时，分钟的十位，个位 
	int m1,m2;
	h1=H/10;
	h2=H-(10*(H/10)); 
	m1=M/10;
	m2=M-(10*(M/10)); 
	printf("%d%d:%d%d",h1,h2,m1,m2);
}
