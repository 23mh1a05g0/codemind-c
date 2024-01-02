#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d%d",&a,&n);
    for(int i=1;i<=n;++i)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}