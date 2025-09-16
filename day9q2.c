#include<stdio.h>
int main ()
{
    int a;
    printf("enter marks;");
    scanf("%d",&a);
    if(a>=90 && a<=100)
    {
        printf("A grade");

    }
    else if (a>=80 && a<89)
    {
        printf("B grade");
    }
    else if (a>=70 && a<79){
        printf("C grade");

    }
    else if(a>=60 && a<69){
        printf("D grade");
    }
    else 
    {
        printf("F grade");
    }
}