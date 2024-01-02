#include<stdio.h>
int main()
{
    int i,x,n,m,k;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d %d %d",&n,&m,&k);
        if((m-k)>=n)
        printf("YES
");
        else
        printf("NO
");
    }
}