#include<iostream>
#include<stdlib.h>

using namespace std;
void print(int[],int);
void push(int [],int,int *);
void pop (int [],int *);
int main()
{
 int A[100],item,n,ans=0,ans2=0;
 char ch;
 cout<<"\n\nEnter the number of elements\n";
 cin>>n;
 cout<<"\n\nEnter the elements of stacks\n";
 for(int i=0;i<n;i++)
 cin>>A[i];

 do{
 cout<<"\n\nEnter 1 to add & 2 to delete item\n";
 cin>>ans;
 switch(ans)
 {
  case 1:
 {
 cout<<"\n\nEnter the element to add\n";
 cin>>item;
 push(A,item,&n);
 cout<<"\n_______Enter 1 to print_______\n";
 cin>>ans2;
 if(ans2)
 print(A,n);
 ans2=0;
 }
 break;
 case 2:
 {
 pop(A,&n);
 cout<<"\n_______Enter 1 to print_______\n";
 cin>>ans2;
 if(ans2)
 print(A,n);
 ans2=0;
 }
 break;
 default :
 cout<<"\nWRONG CHOICE!!!!!\n";
 }
 cout<<"\n\nTo continue press c  || any key to exit\n";
 cin>>ch;
 }while(ch=='c'||ch=='C');


 return 0;
 }
 void push(int A[],int item,int *n)
 { int a=*n;
 if(a<100)
 {A[a]=item;
 *n=a+1;
 }
 else
 {
    cout<<"\nOVERFLOW!!!!!!!!";
    exit(0);
 }

}
 void pop(int A[],int *n)
 {
 int a=*n;
 if(*n>=1)
 *n=a-1;
 else
 {
     cout<<"\nUNDERFLOW!!!!!!";
     exit(0);
 }
 }
 void print(int A[],int n)
 {
 cout<<"\n\n_______Elements of stacks are_______\n";
 for(int i=0;i<n;i++)
 cout<<"\n"<<A[i];
 }











