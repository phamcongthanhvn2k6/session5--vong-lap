#include <stdio.h>

int main() {
    int n, temp, reverse = 0;
    
    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    temp = n;
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    
    printf("Cac chu so trong so da nhap: ");
    while (reverse != 0) {
        printf("%d ", reverse % 10);
        reverse /= 10;
    }
    printf("\n");

    return 0;
}

