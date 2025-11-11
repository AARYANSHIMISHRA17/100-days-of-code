#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_so_far = INT_MIN;  
    int curr_max = 0;          

    for (int i = 0; i < n; i++) {
        curr_max += arr[i];

        
        if (curr_max > max_so_far)
            max_so_far = curr_max;

        
        if (curr_max < 0)
            curr_max = 0;
    }

    printf("%d\n", max_so_far);
    return 0;
}
