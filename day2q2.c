#include<stdio.h>
int main()
{
    int c;
    printf("give radius of the circle:");
    scanf("%d",&c);
    float area =3.14*c*c;
    float circumference=2*3.14*c;
    printf("area of circle is;%f\n",area);
    printf("circumference of circle is:%f\n",circumference);
    return 0;
}