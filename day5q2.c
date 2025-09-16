#include<stdio.h>
int main()
{
    int t;
    printf("time in seconds:");
    scanf("%d",&t);
    int h=t/3600;
    int m=(t%36000)/60;
    int s=t%60;
    printf("the format of h:m:s is %d:%d:%d",h,m,s);
}