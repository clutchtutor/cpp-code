#include<iostream>
#include<stack>
using namespace std;
struct node
{
    int data;
    node *p,*l,*r;
};
void tree(int r,node *parent)
{
    int L,R;
    node *newl=new node,*newr=new node;
    cout<<"Enter left and right child of "<<r<<endl;
    cin>>L>>R;
    if(L)
    {
        parent->l=newl;
        newl->data=L;
        newl->p=parent;
        tree(L,newl);
    }
    else
        parent->l=0;
    if(R)
    {
        parent->r=newr;
        newr->p=parent;
        newr->data=R;
        tree(R,newr);
    }
    else
        parent->r=0;
}
void preorder(node *current)
{
    if(current)
    {
        cout<<current->data<<" ";
        preorder(current->l);
        preorder(current->r);
    }
}
void postorder(node *current)
{
    if(current)
    {
        postorder(current->l);
        postorder(current->r);
        cout<<current->data<<" ";
    }
}
void inorder(node *current)
{
    if(current)
    {
        inorder(current->l);
        cout<<current->data<<" ";
        inorder(current->r);
    }
}
void preit(node *root)
{
    stack<node *> stk;
    stk.push(root);
    while(!stk.empty())
    {
        node *d=stk.top();
        cout<<d->data<<" ";
        stk.pop();
        if(d->r)
            stk.push(d->r);
        if(d->l)
            stk.push(d->l);
    }
}
void init(node *current)
{
    stack<node *> stk;
    int d=0;
    while(!d)
    {
        if(current!=0)
        {
            stk.push(current);
            current=current->l;
        }
        else
        {
            if(!stk.empty())
            {
                current=stk.top();
                stk.pop();
                cout<<current->data<<" ";
                current=current->r;
            }
            else
                d=1;
        }
    }
}
void postit(node *current)
{

    stack<node *> stk1,stk2;
    stk1.push(current);
    while(!stk1.empty())
    {
        node *d=stk1.top();
        stk2.push(d);
        stk1.pop();
        if(d->l)
        stk1.push(d->l);
        if(d->r)
        stk1.push(d->r);
    }
    while(!stk2.empty())
    {
        node *d=stk2.top();
        cout<<d->data<<" ";
        stk2.pop();
    }
}
int main()
{
    int r;
    node *root=new node;
    cout<<"Enter root\n";
    cin>>r;
    root->data=r;
    root->p=0;
    tree(r,root);
    cout<<"\nPreorder   "; preorder(root);
    cout<<"\nInorder    "; inorder(root);
    cout<<"\nPostorder  "; postorder(root);
    cout<<"\nPreorder iterative "; preit(root);
    cout<<"\nInorder iterative "; init(root);
    cout<<"\nPostorder iterative "; postit(root);
}
