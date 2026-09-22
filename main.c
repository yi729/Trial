#include <stdio.h>

int judge(int,int);
int main(void)
{
    int t;
    scanf("%d",&t);
    int n,x,i;
    for (i=0;i<t;i++)
    {
        scanf("%d %d",&n,&x);
        if (judge(n,x)==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
int judge(int n,int x)
{
    int i=0;
    int num[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int j,k;
    for (j=0;j<n-1;j++)
    {
        for (k=0;k<n-j-1;k++)
        {
            int t=0;
            if (num[k]>num[k+1])
            {
                t=num[k];
                num[k]=num[k+1];
                num[k+1]=t;
            }
        }
    }
    double y=x;
    int judge=0;
    if (n%2==0)
    {
        if (y==1.0*(num[n/2-1]+num[n/2])/2)
            judge=1;
    }else
    {
        if (y==num[(n+1)/2-1])
            judge=1;
    }
    return judge;
}
