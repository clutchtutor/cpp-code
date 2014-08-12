#include <iostream>
#include<stdlib.h>
using namespace std;
void merge(int c[],int a[],int n,int b[],int m);
void mergesort(int a[],int b[],int l,int r);
void merge(int c[],int a[],int n,int b[],int m){
         for (int i=0,j=0,k=0;k<n+m;k++){

             if (i==n) {  c[k]=b[j++]; continue;}
             if (j==m ){  c[k]=a[i++];continue;}

             c[k]=(a[i]<b[j])? a[i++]:b[j++];

         }



}
void mergesort(int a[],int b[],int l,int r){
if (l>r)  return ;
     int m=(l+r)/2;

     mergesort(b,a,l,m);
     mergesort(b,a,m+1,r);

 merge(a+l,b+l,m-l+1,b+m+1,r-m);

}
int main(){
    int n,a[100],b[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
mergesort(a,b,0,n-1);
    for (int i=0;i<n;i++){

        cout<<b[i]<< "  ";

    }




     return 0;
}
