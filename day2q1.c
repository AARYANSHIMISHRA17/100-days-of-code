#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("enter length ;");
    scanf("%d",&l);
    printf("enter breadth ;");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("area is equal to;%d\n",area);
    printf("perimeter is equal to;%d",perimeter);
    return 0;
}