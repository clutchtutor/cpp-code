#include<iostream>
using namespace std;
int n,a[100][100],visit[100],c[100];
void dfs(int p);
int main()
{
    int s;
    cout << "enter by which method to traverse: 1.dfs 2.bfs ";
    cin >> s;
    cout << "Enter the number of nodes :";
    cin >> n;
    int i,j,p=1,x=1;
    for(i=1;i<=n;i++)
    visit[i]=0;
    cout << "Enter the adjacency matrix :\n";
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
        cin >> a[i][j];
    }}
    cout << "order of visiting nodes are : 1 ";
    switch(s)
    {
        case 1 : dfs(1);
                 return 0;
        case 2 :  c[1]=1;
                  visit[1]=1;
                  while(p<n)
                  {
                   int d;
                   d=c[p];
                   for(j=1;j<=n;j++)
                   {
                   if(a[d][j]==1&&visit[j]==0)
                   {
                       cout << j << " ";
                       visit[j]=1;
                       x++;
                       c[x]=j;
                   }
                   }
                   p++;
                   }
                   return 0;
    }
}
void dfs(int p)
{
    int i;
    visit[p]=1;
    for(i=1;i<=n;i++)
    {
        if(a[p][i]==1&&visit[i]==0)
           {
             cout<< i <<" ";
             dfs(i);
           }
    }
}
