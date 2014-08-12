#include<iostream>
using namespace std;
#define MAX 101
struct edgelist
{
       int v1,v2,w;
};

int parting(edgelist a[MAX],int p,int r)
{
    int x,i,j;edgelist temp;
    x=a[r].w;
    i=p-1;
    for(j=p;j<r;j++)
    {
          if(a[j].w<=x)
          {
               i++;
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
          }
    }
    temp=a[r];
    a[r]=a[i+1];
    a[i+1]=temp;
    return(i+1);
}
void quick_sort(edgelist a[MAX],int p,int r)
{
     int q;
     if(p<r)
     {
            q=parting(a,p,r);
            quick_sort(a,p,q-1);
            quick_sort(a,q+1,r);
     }
}
class grapher
{
      private:
              edgelist edge[MAX*MAX/2];
              int top;
              int vertic;
              bool used[MAX];
              
      public:
             grapher();
             void addvertic(int vert);
             void addedge(int x,int y,int weight);
             void prim();
};
grapher::grapher()
{
      int i;
      top=0;
      for(i=1;i<=MAX;i++)
              {used[i]=0;}
                   
                
}
 void grapher::addedge(int x,int y,int weight)
{
     edge[++top].v1=x;
     edge[top].v2=y;
     edge[top].w=weight;
}
void grapher::addvertic(int vert)
{
     vertic=vert;
}
void grapher::prim()
{
     quick_sort(edge,1,top);
     
     int count=0,i=1,j=1;
     cout<<endl;
     cout<<edge[1].v1<<' '<<edge[1].v2<<endl;
     used[edge[1].v1]=used[edge[1].v2]=1;
     count++;
     i++;
     while(count<vertic-1)
     {
         if(used[edge[i].v1]+used[edge[i].v2]==1)
         {
                cout<<edge[i].v1<<' '<<edge[i].v2<<endl;
                used[edge[i].v1]=used[edge[i].v2]=1;
                count++;
         }
         i++;
     }
}
int main()
{
    int i,j,u,v,start,vert,w;
     grapher g1;
    cout<<"Enter the number of vertices"<<endl;
    cin>>vert;
    g1.addvertic(vert);
    cout<<"Enter the edges as v1 v2(vertices) and weight.Enter 0 0 0 at the end"<<endl;
    cin>>u>>v>>w;
    while(u+v)
    {
         g1.addedge(u,v,w);
         cin>>u>>v>>w;
    }
    cout<<endl;
    g1.prim();
    cin>>w;
    return 0;
}
