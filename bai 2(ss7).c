#include <stdio.h>

int main() {
    int array[5];
    printf("Nhap lan luot 5 phan tu cua mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Mang ban vua nhap la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]); 
    }
}

