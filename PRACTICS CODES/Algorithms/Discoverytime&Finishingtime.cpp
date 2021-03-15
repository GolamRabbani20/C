#include<stdio.h>
#include<iostream>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int B[100][100];
int color[100];
int Stime[100];
int Ftime[100];
int Time=1;
int i,node,edge;
void dfs();
void DFS_Apply(int m);

int main()
{
    int n1,n2;
    freopen("discovery.txt","r",stdin);
    scanf("%d %d",&node,&edge);
    for(i=0;i<edge;i++)
    {
        scanf("%d %d",&n1,&n2);
        B[n1][n2]=1;
        //B[n2][n1]=1;
    }

    dfs();
    for(i=0;i<node;i++)
    printf("Node:%2c %2d %2d\n",(char)('A'+i),Stime[i],Ftime[i]);
    return 0;
}

void dfs()
{
    for(i=0;i<node;i++)
        color[i]=WHITE;
    for(i=0;i<node;i++)
    {
        if(color[i]==WHITE)
            DFS_Apply(i);
    }
}

void DFS_Apply(int m)
{
  color[m]=GRAY;
  Stime[m]=Time;
  ++Time;

  for(i=0;i<node;i++)
  {
      if(B[m][i]==1)
      {
          if(color[i]==WHITE)
            DFS_Apply(i);
      }
  }
  color[m]=BLACK;
  Ftime[m]=Time;
  ++Time;
}
