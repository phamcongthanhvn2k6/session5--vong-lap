#include<stdio.h>

	int main(){
		int n,i,ketqua=0;
		printf("nhap mot so nguyen duong N: ");
		scanf("%d",&n);
		
		if ( n<1){
			printf("so khong hop le");
			return 1;
		}
		else{
			for (i=1;i<=n;i++){
				ketqua+=i;
			}
		}
		printf("Ket qua la: %d",ketqua);
		
		return 0;
	}
