#include<iostream>
using namespace std;
int binsr(int *arr,int l,int m,int num);
int main()
{
	int arr[10000],i,low,high,k,n;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr[i];
	cin>>k;
	low=0;
	high=n-1;
	binsr(arr,low,high,k);
	return 0;
}
int binsr(int *arr,int l,int m,int num)
{
	
	int flag=0,mid;
	mid=(l+m)/2;
	if(arr[mid]==num)
	{
		cout<<"Choice Found";
		return 0;
	}
	else if(l==m)
		cout<<"Not found";
	else
	if(arr[mid]>num)
		binsr(arr,l,m-1,num);
	else if(arr[mid]<num)
		binsr(arr,l+1,m,num);
	
	return 0;

}