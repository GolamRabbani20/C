#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

int A[100][100];
int color[100];
int parent[100];
int dis[100];
int node,edge;
void bfs(int sn);

#define WHITE 1
#define GRAY 2
#define BLACK 3

int main()
{
    int i,n1,n2;
    //printf("Enter the number of node & edge: ");
    freopen("input.txt","r",stdin);

    scanf("%d %d",&node,&edge);
    //printf("Enter connected nodes:\n");
    for(i=0; i<edge; i++)
    {
        scanf("%d %d",&n1,&n2);
        A[n1][n2]=1;
        A[n2][n1]=1;
    }
    bfs(5);
    printf("\n...............................\n");
    printf("Parent:%d \n",parent[3]);
    printf("Distance:%d \n",dis[3]);
    return 0;
}

void bfs(int sn)
{
    int i;
    for(i=0; i<node; i++)
    {
        color[i]=WHITE;
        parent[i]=-1;
        dis[i]=INT_MIN;
    }
    parent[sn]=-1;
    dis[sn]=0;
    queue<int>q;
    q.push(sn);
    while(!q.empty())
    {
        int v;
        v=q.front();
        q.pop();
        color[i]=GRAY;
        printf("%d ",v);

        for(i=0; i<node; i++)
        {
            if(A[v][i]==1)
            {
                if(color[i]==WHITE)
                {
                    parent[i]=v;
                    dis[i]=dis[v]+1;
                    q.push(i);
                }
            }
        }
        color[v]=BLACK;
    }
}

