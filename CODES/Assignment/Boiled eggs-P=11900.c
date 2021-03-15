#include <stdio.h>
void main()
{
    int n, p, q, t, i, A[1000], sum, r, c;
    scanf("%d",&t);
    for(c=1; c<=t; c++)
    {
        sum = 0;
        scanf("%d %d %d", &n, &p, &q);
        for(i=0; i<n; i++)
            scanf("%d", &A[i]);
            r=0;
        for(i=0;i<p; i++)
        {
            sum+=A[i];
            if(sum>q)
                break;
            r++;
        }
        printf("Case %d: %d\n", c, r);
    }
}

