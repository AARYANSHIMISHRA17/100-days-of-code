#include<stdio.h>
int main()
{
    char a;
    printf("enter a charachter");
    scanf("%c",&a);
    if(a=='a'||a=='e'|| a=='i'|| a=='o'|| a=='u'){
        printf("it is a vowel");
    }
    else{
        printf("it is a consonent");
    }
}

