#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int adj[n][n],v[n],stack[n],p,top,cnt;
	int i,j;
	for(i=1;i<=n;i++)
	{
		v[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>adj[i][j];
		}
	}
	v[1]=1;
	stack[1]=1;
	top=1;
	while(top>0)
	{
		p=stack[top];
		for(i=p;i<=n;i++)
		{
			cnt=0;
			if(adj[p][i]==1 && v[i]==0)
			{
				top++;
				stack[top]=i;
				cnt=1;
				v[i]=i;
				break;
			}
		}
		if(cnt==0)
		{
			cout<<stack[top];
			top--;
		}
	}
	return 0;
}