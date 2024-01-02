#include<stdio.h>
int main()
{
   int a,b,c,k;
   scanf("%d%d%d",&a,&b,&c);
   k=(2*a*b*c*512)/1024;
   printf("%d KB",k);
}