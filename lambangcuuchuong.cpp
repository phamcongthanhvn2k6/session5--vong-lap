#include<stdio.h>

	int main(){
		int n,i;
		printf("Nhap so Nguyen duong N tu 1-10: ");
		scanf("%d",&n);
			printf("Bang cuu chuong cua %d la: \n",n);
			for (i=1;i<=10;i++){
				printf(" %d * %d = %d \n", n,i, n*i);	
		}
		return 0;
	}
