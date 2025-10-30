#include <stdio.h>
#include <stdlib.h>

int main() {
    long n;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%ld", &n);

    if (n < 0) {
        printf("So am! Chuong trinh se bo qua dau tru.\n");
        n = labs(n);
    }

    if (n == 0) {
        printf("Cac chu so: 0\n");
        return 0;
    }

    int digits[20];
    int count = 0;
    long temp = n;

    while (temp > 0) {
        digits[count] = temp % 10;
        temp /= 10;
        count++;
    }

    printf("Cac chu so: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }

