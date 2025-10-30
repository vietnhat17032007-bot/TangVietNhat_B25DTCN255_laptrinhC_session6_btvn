#include <stdio.h>

int main() {
    int a, b, x, y, temp, ucln, bcnn;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1;
    }

    x = a;
    y = b;

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }
    ucln = x;

    bcnn = (a * b) / ucln;

    printf("Boi chung nho nhat (BCNN) cua %d va %d la: %d\n", a, b, bcnn);

    return 0;
}

