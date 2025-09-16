#include <stdio.h>

int main() {
    int num, rev= 0;

    printf("enter number:");
    scanf("%d", &num);

    
    while (num != 0) 
    {
        int d = num % 10;          
        rev = rev * 10 + d;
        num /= 10;
    }

    
    printf("%d\n", rev);

    
}
