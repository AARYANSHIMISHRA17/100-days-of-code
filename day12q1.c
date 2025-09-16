#include<stdio.h>
int main()
{
    int d, fine =0;
    printf("enter the days of returning the book:");
    scanf("%d",&d);
    if (d<=5)
    {
        fine=d*2;
        printf("the fine is %d",fine);
    }
    else if (d>5 && d<=10)
    {
        fine = 5*2 + (d-5)*4;
        printf("the fine is %d",fine);
    }
    else if (d>10 && d<=30)
    {
        fine = 5*2 + 5*4 + (d-10)*6;
        printf(" the fine is %d",fine);

    }
    else 
    {
        printf("your membership is cancelled");

    }
}