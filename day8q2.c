#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter a number:");
    scanf("%d",&b);
    printf("enter a number:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d",a);
    }
    else if (b>a && b>c){
        printf("%d",b);
    
    }
    else (c>a && c>b);
    {
        printf("%d",c);
    }
    
    
}
    