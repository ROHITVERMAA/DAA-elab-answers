#include<iostream>
using namespace std;
#define N 1010
int a[N],w[N],b[N];
int main()
{
	int n,p,x,y,z,i,t,min;
	cin>>n>>p;
	while(p--)
	{
		cin>>x>>y>>z;
		a[x]=y;
		w[x]=z;
		b[x]++;
		b[y]+=2;
	}
	for(t=0,i=1;i<=n;i++)if(b[i]==1)t++;
	printf("%d\n",t);
	for(i=1;i<=n;i++)if(b[i]==1)
	{
		min=w[i];
		t=a[i];
		while(a[t]!=0)
		{
			if(w[t]<min)min=w[t];
			t=a[t];
		}
		printf("%d %d %d\n",i,t,min);
	}
	return 0;
}
