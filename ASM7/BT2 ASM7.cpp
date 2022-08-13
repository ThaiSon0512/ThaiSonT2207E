#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap n so:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	printf("\nNhap x = ");
	scanf("%d",&x);
	int i;
	int Max = 0;
	for (i = 1; i < n ; i++){
		if (arr[i] - x > Max){
			Max = arr[i];
		}
	}
	for (i = 0; i < n; i++){
		if (arr[i] == Max){
			printf("\nPhan tu co gia tri gan voi %d nhat la : %d", x,arr[i]);
		}
	}
}
