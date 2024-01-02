#include<stdio.h>
int main()
{
    float y,x;
    scanf("%f%f",&y,&x); 
    printf("%.2f",(y-x)/y*100);
}