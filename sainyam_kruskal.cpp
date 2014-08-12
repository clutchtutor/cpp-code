#include<iostream>
using namespace std;int adj[100][100]={0},n,visit[100]={0},adjnew[100][100]={0};
int nmin(int lmin)
{	int nemin = 32655,a=-1,b=-1;
	int i,j;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			{	if(adj[i][j]>lmin&&adj[i][j]<nemin&&((visit[i]==1&&visit[j]==0)||(visit[i]==0&&visit[j]==1)||(visit[i]==0&&visit[j]==0)))
				{a=i;
					b=j;
					nemin=adj[i][j];

				}
			}
	visit[a]=1;
	visit[b]=1;
	adjnew[a][b]=nemin;
	adjnew[b][a]=nemin;


}

main()
{
		
		int i,j;
		cout<<"Enter the number of Nodes";
		cin>>n;
		cout<<"\nEnter the Adjancy Matrix \nwith each element as its weight conecting ith anf jth element";

		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			cin>>adj[i][j];
		int trig=0,k;
		k=nmin(0);
		while(trig==0)
		{ nmin(k);
			trig=1;
			for(i=0;i<n;i++)
			{
				if(visit[i]==0)
				trig=0;
			}

		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{cout<<adjnew[i][j]<<' ';}
			cout<<endl;
		}



}