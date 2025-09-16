#include<stdio.h>
int main()
{
    int a, bill=0;
    printf("number of units consumed;");
    scanf("%d", & a);
    if (a<=100)
    {
        bill = a* 5;
        printf("the bill is %d",bill);
    }
    else if (a>100 && a<=200)
    {
        bill = 100*5 + (a-100)*7;
        printf("the bill is %d",bill);
    }
    else if (a>200 && a<=300)
    {
        bill = 100*5 + 100*7 +(a-200)*10;
        printf("the bill is %d",bill);
    }
    else if (a>300)
    {
        bill = 100 *5 + 100*7 + 100*10 + (a-300)*15;
        printf("the bill is %d",bill);

    }
    else {
        bill=100 *5 + 100*7 + 100*10 + a*15;
        printf("the bill is %d",bill);

    }

}