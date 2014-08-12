/*
Created by-
Sec-A Computer Science and Engineering
*/
/*Assumption:Graph is connected*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define MAX_NODE 100
using namespace std;
struct vertex
{
   int info,num_edges,flag;
   struct vertex *next;
   struct vertex *edges;
};
struct node
{
    int vertex;
    node *next;
};
node *adj[MAX_NODE];
int totalNodes;
int queue[MAX_NODE],f=-1,r=-1;
struct vertex *top=NULL,*ptr=NULL;
void stack_push(struct vertex *element)
{
  element->flag++;
  if(top==NULL)
    top=element;
  else
   {
   ptr=element;
   ptr->next=top;
   top=ptr;
   }
}
void stack_pop()
{
   top=top->next;
}
void q_insert(int item)
{
    r = r+1;
    queue[r]=item;
    if(f==-1)
       f=0;
}

int q_delete(){
    int delitem=queue[f];
    if(f==r)
       f=r=-1;
    else
       f=f+1;
    return(delitem);
}

int is_q_empty(){
    if(f==-1)
      return(1);
    else
    return(0);
}
void DFS(struct vertex *ver)
{
		int a;
		stack_push(ver);
		struct vertex *x=ver->edges;//to be used so that array[i].edges do not change
		for(a=0;a<ver->num_edges;a++)
	{
		if(x->flag==0)
		DFS(x);
		x++;
	}
	stack_pop();
}
void createGraphForDFS()
{
	int n;
	cout<<"Enter number of vertices\n";
	cin>>n;
	struct vertex array[n];
		int i;
		for(i=0;i<n;i++)
		{
			cout<<"Enter info for vertex"<<i+1<<endl;
			cin>>array[i].info;
			array[i].flag=0;
			array[i].next=NULL;
		}
		for(i=0;i<n;i++)
		{
			int j,k;
			cout<<"Enter number of edges for vertex"<<i+1<<endl;
			cin>>array[i].num_edges;
			array[i].edges=(struct vertex*)malloc(array[i].num_edges*sizeof(struct vertex));//allocating memory for edges
			for(j=0;j<array[i].num_edges;j++)//taking edges
			{
				Z:
				cout<<"Enter connected vertex number\n";
				cin>>k;
				if(k<=0||k>n)
				{
				    cout<<"Error\n";
				    goto Z;
                }
				array[i].edges=&array[k-1];
				array[i].edges++;
			}
			for(j=0;j<array[i].num_edges;j++)
			array[i].edges--;
		}

DFS(array);
	int c;
	for(c=0;c<n;c++)
      cout<<array[c].flag;
}
void createGraphForBFS()
{
    node *newl,*last;
    int neighbours,neighbour_value;
    cout<<"Enter total nodes in graph:\n";
    cin>>totalNodes;
    for(int i=0;i<totalNodes;i++)
    {
        last=NULL;
        cout<<"Enter no. of nodes which are neighbours of node "<<i<<"\n";
        cin>>neighbours;
        for(int j=0;j<neighbours;j++)
        {
            cin>>neighbour_value;
            newl=new node;
            newl->vertex=neighbour_value;
            newl->next=NULL;
            if(adj[i]==NULL)
                adj[i]=last=newl;
            else
            {
                last->next = newl;
                last = newl;
            }
        }
    }
}
void BFS_traversal()
{
    createGraphForBFS();
    node *tmp;
    int i,N,v,start_node,status[MAX_NODE];
    cout<<"Enter starting node : ";
    cin>>start_node;
    for(int i=0;i<totalNodes;i++)
    status[i]=1;
    q_insert(start_node);
    status[start_node]=0;
    while(is_q_empty()!=1)
    {
        N = q_delete();
        status[N]=2;
        cout<<"   "<<N;
        tmp = adj[N];
        while(tmp!=NULL)
        {
        v = tmp->vertex;
        if(status[v]==1)
        {
            q_insert(v);
            status[v]=0;
        }
            tmp=tmp->next;
        }
    }
    for(i=0;i<totalNodes;i++)
    cout<<status[i]<<" ";
    cout<<"\n";
}
int main()
{
    char n1;
    Z:
    cout<<"Enter 1 for DFS , 2 for BFS and 3 to exit\n";
    n1=getch();
    if(n1=='1')
    {
        createGraphForDFS();
        goto Z;
    }
    else
      if(n1=='2')
      {
          BFS_traversal();
          goto Z;
      }
      else
         exit(0);
    return 0;
}
