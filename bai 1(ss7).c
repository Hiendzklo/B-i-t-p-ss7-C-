#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(array) / sizeof(array[0]);
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("Do dai cua mang la: %d\n", length);
}

