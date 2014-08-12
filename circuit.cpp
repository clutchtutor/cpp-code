#include<iostream>
using namespace std;
main()
{
	int node,i,j;
	cin>>node; //no. of nodes in a graph
	int parent[node];
	for(i=0;i<node;i++)
		parent[i]=-1;
	int adj[node][node]; //adjacency matrix
	for(i=0;i<node;i++)
	{
		for(j=0;j<node;j++)
			cin>>adj[i][j];
	}
	for(i=0;i<node;i++)
	{
		for(j=0;j<node;j++)
		{
			if(adj[i][j]==1 && j>i)
				parent[i]=j;
		}
	}
	for(i=0;i<node;i++)
	{
		if(parent[i]==-1)
		{
			cout<<"circuit in the graph is:"<<i<<" ";
			for(j=0;j<node;j++)
			{
				if(parent[j]==i)
					cout<<j<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}