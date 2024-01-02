#include<stdio.h>
int main()
{
    int i,n,m,k=0;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        if(i%3==0)
        {
            k++;
        }
    }
    printf("%d",k);
}