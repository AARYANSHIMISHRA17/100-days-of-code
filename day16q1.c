#include <stdio.h>

int main() {
    int num;
    printf("enter the number:");
    scanf("%d", &num);

    if (num == 0) 
    {
        printf("0\n");
        return 0;
    }

    int a = 1 << 30; 

    
    while ((num & a) == 0) {
        a >>= 1;
    }

    
    while (a > 0) {
        if (num & a)
            printf("1");
        else
            printf("0");
        a >>= 1;
    }

    printf("\n");
    return 0;
}
