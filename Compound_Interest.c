#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    float i,ci;
    scanf("%d%d%d",&p,&r,&t);
    i=p*(pow((1+r/100.0),t));
    ci=i-p;
    printf("%.2f",ci);
}