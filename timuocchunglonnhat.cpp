#include <stdio.h>

int main() {
    int so1, so2, ucln;
    
    printf("Nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap vao so nguyen duong thu hai: ");
    scanf("%d", &so2);

    if (so1 <= 0 || so2 <= 0) {
        printf("Nhap So khong phu hop !\n");
        return 1;
    }

    while (so2 != 0) {
        int temp = so2;
        so2 = so1 % so2;
        so1 = temp;
    }
    ucln = so1;

    printf("Uoc chung lon nhat cua hai so la: %d\n", ucln);

    return 0;
}

