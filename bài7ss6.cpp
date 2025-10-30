#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1;
    }

    int x = a, y = b;
    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n", a, b, x);

    return 0;
}

