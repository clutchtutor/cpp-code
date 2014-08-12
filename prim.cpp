#include<iostream>
using namespace std;
main()
{
	int a[1000][1000];
	cout<<"Enter the number of verices: ";
	int n,e;
	cin>>n;
	cout<<"Enter the number of edges:";
	cin>>e;
	cout<<"Enter the edges with weights:"<<endl;
	int i,j,min,visit[n],visit1[n],m=0,k=0,l=1,z=0;
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			cin>>a[i][j];			//input of adjacency matrix
			if(a[i][j]!=0)
				min=a[i][j];
		}
	}
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			if(a[i][j]<min && a[i][j]!=0)
			{
				min=a[i][j];		//finding minimum weight
				visit[m]=i;
				visit1[k]=j;
			}		
		}
	}
	while(l<e-2)
	{
		i=visit[z];
		for(j=1;)
	}
	return 0;
}