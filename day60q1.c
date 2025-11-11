#include <stdio.h>
#include <stdlib.h>


struct Deque {
    int *arr;
    int front, rear, size;
};


struct Deque* createDeque(int size) {
    struct Deque* dq = (struct Deque*)malloc(sizeof(struct Deque));
    dq->arr = (int*)malloc(size * sizeof(int));
    dq->front = dq->rear = -1;
    dq->size = size;
    return dq;
}


int isEmpty(struct Deque* dq) {
    return dq->front == -1;
}

void pushBack(struct Deque* dq, int x) {
    if (dq->rear == dq->size - 1)
        dq->rear = -1;
    dq->arr[++dq->rear] = x;
    if (dq->front == -1)
        dq->front = 0;
}

void popFront(struct Deque* dq) {
    if (isEmpty(dq)) return;
    if (dq->front == dq->rear)
        dq->front = dq->rear = -1;
    else
        dq->front++;
}


int front(struct Deque* dq) {
    return dq->arr[dq->front];
}


void printMaxInSubarrays(int arr[], int n, int k) {
    struct Deque* dq = createDeque(n);

    for (int i = 0; i < k; i++) {
        while (!isEmpty(dq) && arr[i] >= arr[dq->arr[dq->rear]])
            dq->rear--;
        pushBack(dq, i);
    }

    for (int i = k; i < n; i++) {
        printf("%d ", arr[dq->arr[dq->front]]);

        
        while (!isEmpty(dq) && dq->arr[dq->front] <= i - k)
            popFront(dq);

        
        while (!isEmpty(dq) && arr[i] >= arr[dq->arr[dq->rear]])
            dq->rear--;

        pushBack(dq, i);
    }

    
    printf("%d\n", arr[dq->arr[dq->front]]);
}

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    printMaxInSubarrays(arr, n, k);

    return 0;
}

