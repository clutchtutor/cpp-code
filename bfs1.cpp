#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int adj[n][n],i,j,c[100],x=1,p=1,visit[n+1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>adj[i][j];
		}
	}
	for(i=1;i<=n;i++)
		visit[i]=0;
	visit[1]=1;
	cout<<"1 ";
	c[1]=1;
	while(p<n)
	{
		int d;
		d=c[p];
		for(i=1;i<=n;i++)
		{
			if(adj[d][i]==1 && visit[i]==0)
			{
				cout<<i<<" ";
				visit[i]=1;
				x++;
				c[x]=i;
			}
		}
	p++;
	}
}