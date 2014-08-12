#include <iostream>
#define MAXNODES 1000
struct node
{
    node* left;
    node* right;
    int data;
}*tree=0;
int n;
void ins(node**,int);
void inorder(node*);
void preorder(node*);
void postorder(node*);
using namespace std;
int main()
{
    int i=0,val;
    cout << "\nEnter the number of values: ";
    cin >> n;
    while(n>i++)
    {
        cout << "-> ";
        cin >> val;
        ins(&tree,val);
    }
    cout << "\nPreorder -> ";
    preorder(tree);
    cout << endl << endl << "Inorder -> ";
    inorder(tree);
    cout << endl << endl << "Postorder -> ";
    postorder(tree);
    return 0;
}

void ins(node**root,int val)
{
    if (*root==0)
    {
        node*temp = new node;
        temp->data = val;
        temp->left = 0;
        temp->right = 0;
        *root = temp;
    }
    else
    {
        if (val <= (*root)->data)
        ins(&((*root)->left),val);
        else ins(&((*root)->right),val);
    }
}

void inorder(node*root)
{
    int c=-1;
    node** arr = new node*[n];
    int done = 0;
    while(!done)
    {
        if(root!=0)
        {
            arr[c++] = root;
            root = root->left;
        }
        else
        {
            if(c!=-1)
            {
                root = arr[--c];
                cout << root->data << ' ';
                root = root->right;
            }
            else done = 1;
        }
    }
}

void preorder(node*root)
{
    int c = -1;
    node** arr = new node*[n];
    if(root==0)
        return;
    arr[c++] = root;
    while(c!=-1)
    {
        root = arr[--c];
        cout << root->data <<' ';
        if (root->right) arr[c++] = root->right;
        if(root->left) arr[c++] = root->left;
    }
}

void postorder(node*root)
{
    int c=-1;
    node** arr = new node*[n];
    if (root==0)
        return;
    do
    {
        while(root!=0)
        {
            if(root->right) arr[c++] = root->right;
            arr[c++] = root;
            root = root->left;
        }
        root = arr[--c];
        if(root->right && arr[c-1]==root->right)
        {
            arr[c-1] = root;
            root = root->right;
        }
        else
        {
            cout << root->data <<' ';
            root = NULL;
        }
    } while(c!=-1);
}
