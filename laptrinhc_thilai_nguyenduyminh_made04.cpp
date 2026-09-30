#include <stdio.h>
#define MAX_SIZE 50
int main(){
	int choice;
	int usage[MAX_SIZE] = {120,250,95,310};
	int n = 5;
	return 0;
	int pos;
	int value;
	int newValue;
	int tyes;
	while{
		printf("/n======================================================/n");
		printf("/n      CHUONG TRINH QUAN LY DIEN NANG SAO MAI      ");
		printf("/n======================================================/n");
		printf("1. Them chi so dien tieu thu");
		printf("2. Sua chi so dien tieu thu");
		printf("3. Xoa chi so dien tieu thu");
		printf("4. Tim kiem chi so dien tieu thu");
		printf("0. Thoat chuong trinh");
		printf("/n======================================================/n");
		printf("Vui long nhap lua chon cua ban(0-4)");
		scanf("%d", &choice);
		
		switch (choice) {
 			case 1:
                printf("\n");
                if (n == MAX_SIZE) {
                    printf("Mang da day, khong the them phan! \n");
                    break;
                }
                printf("Moi ban nhap vao gia tri chi tieu thu can them: ");
                scanf("%d", &value);
                if (value < 0) {
                    printf("So luong chi tieu thu khong hop le\n");
                    break;
                }
                printf("Moi ban nhap vao vi tri muon chen: ", n + 1);
                scanf("%d", &pos);
                if (pos < 1 || pos > n + 1) {
                    printf("Vi tri chen khong hop le\n");
                    break;
                }
                for (int i = n; i >= pos; i--) {
                    usage[i] = usage[i - 1];
                }
                usage[pos - 1] = value;
                n++;
                printf("Chen thanh cong\n");
                printf("Mang sau khi chen: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", usage[i]);
                }
                printf("\n");
                break;
			case 2:
                if (n == 0) {
                    printf("Danh sach ton kho dang rong, khong the sua\n");
                    break;
                }
                printf("Cac phan tu dang co trong mang: \n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", usage[i]);
                }
                printf("\n");

                printf("Moi ban nhap vao vi tri can sua: ", n);
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("Vi tri sua khong hop le\n");
                    break;
                }
                printf("Moi ban nhap vao gia tri moi: ");
                scanf("%d", &value);
                if (value < 0) {
                    printf("So luong chi tieu thu khong hop le\n");
                    break;
                }
                usage[pos - 1] = value;
                printf("Sua so chi tieu thu thanh cong\n");
                printf("Mang sau khi sua: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", usage[i]);
                }
                printf("\n");
                break;

			case 3:
				if (n == 0) {
					printf("Mang rong, khong the xoa")
				}
				printf("Moi ban nhap vi tri can xoa:")
				scanf(%d, &value);
				if(pos < 1 || pos > n)
					printf("vi tri can xoa khong hop le!")
					break;
				}
				for(int i = pos; i < n -1, i++){
				usage[i] = usage[i + 1]	
				}
				n--;
				
				break;
			case 4:
				printf("Nhap gia tri can tim:")
				scanf("%d, &taget")
				print("Tim thay tai vi tri: ")
				for(int i = 0; i < n);
				
				break;
			case 0:
                printf("Thoat\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long nhap lai\n");
                break;	
		}
	}
}
