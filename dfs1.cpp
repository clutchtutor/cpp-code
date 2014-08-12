#include<iostream>
using namespace std;
main()
{
	int n,i,j,k,p=0;
	cin>>n;
	int adj[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>adj[i][j];
		}
	}
	int stack[n],top=0,pv[n];
	for(i=0;i<n;i++)
		pv[i]=0;
	pv[0]=1;
	while(p<n)
	{
		for(i=0;i<n;i++)
		{
			if(adj[p][i]==1 && pv[i]!=1)
			{
				stack[top]=p;
				cout<<stack[top]<<endl;
				top++;
				pv[p]=1;
				break;
			}
		}
		p=i;
	}
	cout<<stack[top-1];
	return 0;
}