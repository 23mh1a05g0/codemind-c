#include<stdio.h>
int main()
{
    int n,p=0,r,c;
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        p=r+(p*10);
        n=n/10;
    }
    if(c==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}