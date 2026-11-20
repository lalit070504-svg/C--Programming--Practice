#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is maximum number",a);
    }
    else
    {
        printf("%d is maximum number",b);
    }
    return 0;
}