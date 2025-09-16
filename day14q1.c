#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("enter a number");
    scanf("%d", &n);

    
    for (int i = 1, c = 0; c < n; i += 2) 
    {
        sum =sum+ i;
        c++;
    }

    
    printf("%d\n", sum);

    return 0;
}
