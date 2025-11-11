#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n; i++) {
        int prev = -1; 

        
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }

        
        if (i == n - 1)
            printf("%d\n", prev);
        else
            printf("%d, ", prev);
    }

    return 0;
}
