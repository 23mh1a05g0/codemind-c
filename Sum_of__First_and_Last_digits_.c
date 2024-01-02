#include<stdio.h>
int main()
{
    int n,b,f,sum;
    scanf("%d",&n);
    f=n%10;
    while(n!=0)
    {
        b=n%10;
        n=n/10;
    }
    sum=f+b;
    printf("%d",sum);
}