//how to print the two dimentional array
#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int a[r][c];
    //reading elements
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //printing elements
    for(i=0;i<c;i++)
    {
        int sum=0;
        for(j=0;j<r;j++)
        {
            sum=sum+a[j][i];
        }
        printf("%d ",sum);
    }
}