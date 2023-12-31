#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a],i,c=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++)
    {
        if((ar[i-1])%2!=0&&ar[i]%2==0&&(ar[i+1])%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}