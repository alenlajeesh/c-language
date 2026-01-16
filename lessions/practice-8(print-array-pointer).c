#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;

    for (int i = 0; i < 6; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}

