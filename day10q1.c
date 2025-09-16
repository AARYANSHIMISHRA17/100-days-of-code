#include<stdio.h>
int main()
{
    int l1,l2,l3;
    printf("enter lenghth of triangle:");
    scanf("%d %d %d",&l1, &l2, &l3);
    if(l1==l2 && l2==l3 && l3==l1)
    {
        printf("the triangle is equilateral");
    }
    else if(l1==l2 || l2==l3|| l3==l1){
        printf("the triangle is isoscles");

    }
    else{
        printf("the triangle is scalene");
    }

}