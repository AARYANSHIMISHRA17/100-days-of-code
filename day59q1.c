#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    int max_sum = 0;
    int window_sum = 0;

    
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    
    for (int i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i]; 
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("%d\n", max_sum);

    return 0;
}
