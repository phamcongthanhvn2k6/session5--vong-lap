#include <stdio.h>

int main() {
    int ketqua, a, b, menu;
    
    printf("CALCULATOR\n");
    printf("\n");
    printf("1. Tong 2 so\n");
    printf("2. Hieu 2 so\n");
    printf("3. Tich 2 so\n");
    printf("4. Thuong 2 so\n");
    printf("5. Thoat\n");
    printf("Nhap yeu cau cua ban: ");
    scanf("%d", &menu);
    
    printf("Nhap So Thu Nhat: ");
    scanf("%d", &a);
    printf("Nhap So Thu Hai: ");
    scanf("%d", &b);
    
    switch(menu) {
        case 1:
            ketqua = a + b;
            printf("Tong cua hai so la: %d\n", ketqua);
            break;
        case 2:
            ketqua = a - b;
            printf("Hieu cua hai so la: %d\n", ketqua);
            break;
        case 3:
            ketqua = a * b;
            printf("Tich cua hai so la: %d\n", ketqua);
            break;
        case 4:
            if (b != 0) {
                float ketquaThuong = (float) a / b;
                printf("Thuong cua hai so la: %.2f\n", ketquaThuong);
            } else {
                printf("Khong the chia cho 0\n");
            }
            break;
        case 5:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Lua chon khong hop le\n");
            break;
    }
    
    return 0;
}

