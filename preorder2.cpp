# include <iostream>
using namespace std;
int a[1000]={0};

void preorder(int i)
{
    if(a[i]!=0){cout<<a[i]<<" ";preorder(2*i);preorder(2*i+1);}
}

void postorder(int i)
{
    if(a[i]!=0)
    {
        postorder(2*i);
        postorder(2*i+1);
        cout<<a[i]<<" ";
    }
}

void inorder(int i)
{
    if(a[i]!=0)
    {
        inorder(2*i);
        cout<<a[i]<<" ";
        inorder(2*i+1);
    }
}

main()
{

    cout<<"enter no. of nodes"<<endl;
    int nodes;
    cin>>nodes;
    cout<<"enter root"<<endl;
    cin>>a[1];
    int i=1;
    int k=1;
    cout<<"enter 0 where child not present"<<endl;
    while(k<nodes)
    {
        if(a[i]!=0)
        {
            cout<<"enter left and right child of "<<a[i]<<endl;
            cin>>a[2*i]>>a[2*i+1];
            if(a[2*i]!=0)k++;if(a[2*i+1]!=0)k++;
        }
        i++;
    }

    cout<<endl<<"PREORDER"<<endl;
    preorder(1);
    cout<<endl<<"POSTORDER"<<endl;
    postorder(1);
    cout<<endl<<"INORDER"<<endl;
    inorder(1);
    cout<<endl;
}
