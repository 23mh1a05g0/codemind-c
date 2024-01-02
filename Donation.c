#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        z=y-x;
        printf("%d",z);
    }
    else
    {
        printf("%d",0);
    }
}