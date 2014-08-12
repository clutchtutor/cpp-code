#include<iostream>
using namespace std;
int arr1[50],arr2[50];
int merge(int *a,int *b,int *c,int last1, int last2, int last3, int start)
{
   int i=start,j=0,k=0;

   while(j<=last2&&k<=last3)
   {
   	if(b[j]<c[k])
   		a[i++]=b[j++];
   	else
   		if(b[j]>c[k])
   		a[i++]=c[k++];
   	else
   		{a[i++]=c[k++];
   		 a[i++]=b[j++];}
   	}
   	
   	while(j<=last2)
   		a[i++]=b[j++];
   	while(k<=last3)
   		a[i++]=b[j++];


}
int mergesort(int *arr, int start, int size)
{  cout<<start<<size<<endl;
 	if(size==1)
 	{return (0);

 	}  
 	else
 	if (size==2)
 	{ if(arr[start]>arr[start+1])
 		{arr[start]=arr[start]+arr[start]+1;
 		 arr[start+1]=arr[start]-arr[start+1];
 		 arr[start]=arr[start]-arr[start+1];

 		}
 		return 0;

 	}
    if(size%2==0)
    {
 	mergesort(arr,start,size/2);
 	mergesort(arr,start+size/2,size/2);

    }
    else
    	if(size%2==1)
    {
 	mergesort(arr,start,size/2);
 	mergesort(arr,start+size/2,size/2+1);
 	
    }
    
    for(int i=start,j=0;i<size/2;i++,j++)
    	arr1[j]=arr[i];
    for(int i=start+size/2,j=0;i<size;i++,j++)
    	arr2[j]=arr[i];
    if(size%2==0)
    {
 	merge(arr,arr1,arr2,size,size/2,size/2,start);
    }
    else
    	if(size%2==1)
    {merge(arr,arr1,arr2,size,size/2,size/2+1,start);
 	
    }
    return 0;
}

main()
{  int arr[100],size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	mergesort(arr+1,0,size);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}



}