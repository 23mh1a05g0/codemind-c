#include<stdio.h>
int main()
{
    float g,b,h,d,p,l;
    scanf("%f%f%f",&b,&h,&d);
    p=(b/100)*12;
    g=h+d+p+b;
    printf("%.2f
",p);
    printf("%.2f
",g);
}