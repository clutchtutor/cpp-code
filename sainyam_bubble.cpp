#include<iostream>
using namespace std;
int sort1(int *arr,int size)//bubble sort
{int test;
	for(int i=0;i<size-1;i++)
		for(int j=1;j<size-i;j++)
		  if (arr[j]<arr[j-1])
			{
				test=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=test;
			}
			
		
}
int sort2(int *arr,int size)//selection sort
{ int low,pos;
	for(int i=0;i<size-1;i++)
	{
		low=arr[i];
		pos=i;


		for(int j=i;j<size;j++)
		{ if(low>arr[j])
			{low=arr[j];
				pos=j;


			}

		}
		if(pos!=i)
		{
			arr[pos]=arr[i];
			arr[i]=low;
		}

	}


}

int sort3(int *arr,int size)//insertion sort
{ int j=0,k,temp;

	for(int i=1;i<size;i++)
	{ k=i;
		while(k>=0&&arr[k-1]>arr[k])
			{temp=arr[k-1];
				arr[k-1]=arr[k];
				arr[k]=temp;
				k--;}
    }


}
int main()
{
	int n,arr[1000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort1(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";



}