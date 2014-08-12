#include<iostream>
using namespace std;
main()
{
	int arr[100],pos,min,i,temp,n,j,k;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(k=0;k<n-1;k++)
	{
		min=arr[k];
		pos=k;
		for(j=k+1;j<n;j++)
		{
			if(arr[pos]>arr[j])
				pos=j;
		}
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;	
	}
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}