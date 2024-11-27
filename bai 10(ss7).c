#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int array[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Cac phan tu la so nguyen to trong mang: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(array[i])) {
            printf("%d ", array[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co so nguyen to nao trong mang.");
    }
}

