#include<stdio.h>
int min()
{
    int a,b,div;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    div=a/b;
    printf("Division of %d and %d is %d",a,b,div);
    return 0;
}