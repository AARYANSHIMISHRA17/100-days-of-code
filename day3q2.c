#include<stdio.h>
int main()
{
    int a,b;
    printf("give a number:");
    scanf("%d",&a);
    printf("give a number:");
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("a=%d\nb=%d",a,b);
    return 0;
}