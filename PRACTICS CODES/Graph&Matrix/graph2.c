#include<stdio.h>
int A[100][100];
int color[100];
int parent[100];
int dis[100];
int node,edge;
void bfs(int sn);
#define WHITE 1;
#define GRAY 2;
#define BLACK 3;
int main()
{
    int i,n1,n2;
    printf("Enter the number of node & edge: ");
    scanf("%d %d",&node,&edge);
    for(i=0;i<edge;i++)
    {
        scanf("%d %d",&n1,&n2);
        A[n1][n2]=1;
        A[n2][n1]=1;
    }
    bfs(0);
    return 0;
}

void bfs(int sn)
{
    int i;
    for(i=0;i<node;i++)
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
        v=q.fornt();
        q.pop();
        color[i]=GRAY;
        printf("%d ",v);

        for(i=0;i<node;i++)
        {
            if(A[v][i]==1)
            {
                if(color[i]==WHILE)
                {
                    parent[i]=v;
                    dis[i]=parent[v]+1;
                    q.push();
                }
            }
        }
        color[i]=BLACK;
    }
}
