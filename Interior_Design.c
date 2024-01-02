#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,s,k;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    s=x1+y1;
    k=x2+y2;
    if(s<k)
    {
        printf("%d",s);
    }
    
        else
        {
            printf("%d",k);
        }
    
}