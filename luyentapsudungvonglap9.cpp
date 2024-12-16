#include<stdio.h>

	int main(){
		int a,b,c;
		int menu;
		int trangthai;
		
		do {
			printf("\n MENU \n");
			printf("1. Nhap 3 So\n");
			printf("2. Tong Cua 3 So\n");
			printf("3. Trung Binh Cong Cua 3 So\n");
			printf("4. So Nho Nhat \n");
			printf("5. So Lon Nhat \n");
			printf("6. THOAT \n");
			printf("Lua CHon Cua Ban: ");
			scanf("%d",&menu);
			
			switch(menu){
				case 1:
					printf("Nhap So Thu Nhat: ");
					scanf("%d",&a);
					printf("Nhap So Thu Hai: ");
					scanf("%d",&b);
					printf("Nhap So Thu Ba: ");
					scanf("%d",&c);
					trangthai = 1;
					break;
				case 2:
					if ( trangthai){
						printf(" Tong cua ba so la: %d\n", a+b+c);
						}
					else{
						printf("Vui Long Nhap 3 So Truoc!");
					}
					break ;
				case 3:
					if(trangthai){
						printf("Trung Binh Cong Cua 3 So: %.1f\n", (a+b+c)/3.0);
					}
					else{
						printf("Vui Long Nhap 3 So truoc!");
					}
					break;
				case 4:
					if(trangthai){
						int min =a;
						if(b< min){
							min =b;
						}
						if(c<min){
							min=c;
						}
						printf("So NHo Nhat Trong 3 So La: %d\n",min);
					}
						else{
							printf("Vui Long Nhap 3 So truoc!");
						}
						break ;
				case 5:
					if(trangthai){
						int max =a;
						if( b > max){
							max =b;
						}
						if( c>max ){
							max=c;
						}
						printf("So Lon Nhat Trong 3 So La: %d\n",max);
					}
						else{
							printf("Vui Long Nhap 3 So truoc!");
						}
						break ;
				case 6: 
					printf("Thoat chuong trinh...\n");
					break; 
				default: 
					printf("Lua chon khong hop le. Vui long chon lai.\n"); 
					break; 
					} 
				} 
				while (menu != 6); 
				
				return 0;
			}
					
			
		
	
