#include <stdio.h>

int main() {
    int array[5] = {10, 25, 7, 56, 18};
    printf("Mang ban dau: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            array[i] += 3;
        } else {
            array[i] += 2;
        }
    }
    printf("Mang sau khi thay doi: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
}

