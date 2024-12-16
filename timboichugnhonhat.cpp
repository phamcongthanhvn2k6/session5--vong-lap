#include <stdio.h>

int main() {
    int so1, so2, max, bcnn;
    
    printf("Nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap vao so nguyen duong thu hai: ");
    scanf("%d", &so2);


    if (so1 <= 0 || so2 <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1;
    }
    max = (so1 > so2) ? so1 : so2; 

    while (1) {
        if (max % so1 == 0 && max % so2 == 0) {
            bcnn = max;
            break;
        }
        max++;
    }

    printf("Boi chung nho nhat cua %d va %d la: %d\n", so1, so2, bcnn);

    return 0;
}

