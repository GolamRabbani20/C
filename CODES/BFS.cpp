#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

void bfs(int startingNode);
int A[100][100];
int color[100];
int dis[100];
int parent[100];
int node,edge;

int main()
{
    int i,n1,n2;
    freopen("input.txt","r",stdin);
    scanf("%d %d",&node,&edge);

    for(i=0; i<edge; i++)
    {
        scanf("%d %d",&n1,&n2);
        A[n1][n2]=1;
        A[n2][n1]=1;
    }
    bfs(0);
    printf("\n%d\n",parent[5]);
    printf("%d\n",dis[6]);
    return 0;
}

void bfs(int startingNode)
{
    for(int i=0; i<node; i++)
    {
        color[i]=WHITE;
        dis[i]=INT_MIN;
        parent[i]=-1;
    }

    dis[startingNode]=0;
    parent[startingNode]=-1;

    queue<int>q;
    q.push(startingNode);

    while(!q.empty())
    {
        int x;
        x=q.front();
        q.pop();
        color[x]=GRAY;
        printf("%d ",x);
        //Some work
        for(int i=0; i<node; i++)
        {
            if(A[x][i]==1)
            {
                if(color[i]==WHITE)
                {
                    // x ar child i
                    // x no node hocche i no node er parent

                    dis[i]=dis[x]+1;
                    parent[i]=x;
                    q.push(i);
                }
            }
        }
        color[x]=BLACK;
    }
}
