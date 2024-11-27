#include <stdio.h>

int main() {
    int array[5] = {1, 4, 7, 10, 13};
    int foundEven = 0; 
    printf("Cac so chan trong mang la: \n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) { 
            printf("%d ", array[i]);
            foundEven = 1;
        }
    }
    if (!foundEven) {
        printf("Mang khong chua so chan.");
    }
}

