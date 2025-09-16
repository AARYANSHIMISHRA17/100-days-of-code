#include<stdio.h>
int main()
{
    int temp;
    printf("temperature in celsius:");
    scanf("%d",& temp);
    int fahrenheit=(temp*9/5)+32;
    printf("conversion in fahrenheit is : %d",fahrenheit);
    return 0;
}