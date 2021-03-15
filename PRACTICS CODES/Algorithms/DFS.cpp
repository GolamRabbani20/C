#include<iostream>
#include<stdio.h>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int A[100][100];
int color[100];
int node,edge;
void DFS();
void DFS_Apply(int x);
int main()
{
    int i,n1,n2;
   freopen("takeinput.txt","r",stdin);
   scanf("%d %d",&node, &edge);
   for(i=0;i<edge;i++)
   {
     scanf("%d %d",&n1,&n2);
     A[n1][n2]==1;
     A[n2][n1]==1;
   }

   DFS();

}

 void DFS()
 {
     int i;
     for(i=0;i<node;++i)
     color[i]=WHITE;
     for(i=0;i<node;i++)
     {
         if(color[i]==WHITE)
            DFS_Apply(i);
     }
 }

 void DFS_Apply(int x)
 {
     int i;
     color[x]=GRAY;

     //DFS mechanism is applying here.
     for(i=0;i<node;i++)
     {
         if(A[x][i]==1)
         {
             if(color[i]==WHITE)
             {
                 DFS_Apply(i);
             }
         }

     }
     color[x]=BLACK;
     printf("%d ",x);
 }

