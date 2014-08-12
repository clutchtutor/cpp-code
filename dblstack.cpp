#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array : ";
    cin>>n;
     int i=0,s,j,a[n],l,m,k,p1,p2;
     k=n-1;
    while(1)
    {
    cout<<"enter 1 to push 2 to pop 3 to display : ";
    cin>>j;
    switch(j)
    {
        case 1 : cout<<"enter 1 to push in stack 1 or 2 to push in stack 2 : ";
                    cin>>s;
                    switch(s)
                    {
                        case 1 :    if(i<=k)
                                    {cout<<"enter element to push : ";
                                    cin>>a[i++];}
                                    else
                                        cout<<"stack 1 overflow \n";
                                    break;
                        case 2 :    if(k>=i)
                                    {cout<<"enter element to push : ";
                                    cin>>a[k--];}
                                    else
                                        cout<<"stack 2 overflow\n";
                                    break;

                    }
                    break;
        case 2 : cout<<"enter 1 to pop from stack 1 or 2 to pop from stack 2 : ";
                    cin>>s;
                    switch(s)
                    {
                        case 1 :  p1=a[i];i--;break;
                        case 2 :  p2=a[i];k++;break;
                    }
                    break;
        case 3 :
                    cout<<"stack 1 is : ";
                    for(l=0;l<i;l++)
                        cout<<a[l]<<" ";cout<<endl;
                 cout<<"stack 2 is : ";
                    for(l=n-1;l>k;l--)
                        cout<<a[l]<<" ";cout<<endl;
                    break;
        default : cout<<"wrong choice\n";
    }
    }
    return(0);

}
