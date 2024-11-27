#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &array[i]);
            if (array[i] % 2 == 0) {
                printf("Phan tu phai la so le. Vui long nhap lai!\n");
            }
        } while (array[i] % 2 == 0); 
    }
    printf("Mang ban nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

