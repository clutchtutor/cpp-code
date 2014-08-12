#include<iostream>
using namespace std;
int merge(int *a,int *b,int *c,int last1, int last2, int last3, int start)
{
   int i=start,j=0,k=0;

   while(j<=last2&&k<=last3)
   {
   	if(b[j]<c[k])
   		a[i++]=b[j++]
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


};
main()
{
	int a[10],b[5],c[5];
	for(int i=0;i<5;i++)
	cin>>b[i];
	for(int i=0;i<5;i++)
	cin>>c[i];
    merge(a,b,c,9,4,4,0);
    for(int j=0;j<10;j++)
    	cout<<a[j];

    

	
}