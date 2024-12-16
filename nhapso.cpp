#include<stdio.h>

	int main(){
		int sonhap, sochotruoc=27;
		do {
		 printf("Nhap mot so: ");
		 scanf("%d", &sonhap);
		 if (sonhap != sochotruoc){
		 	printf("Ban nhap khong dung, hay thui lai!\n");
		 }
	}
	while (sonhap != sochotruoc);
	
	printf("Ban nhap dung roi, xin chuc mung");
	
	return 0;
}
