#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%100<10)printf("0");
    printf("%d",n%100);
}
