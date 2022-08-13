#include <stdio.h>
#include <math.h>
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
	for(int i = 1; i < n; i++){
		x = (x > (fabs)(arr[i])) ? x : (fabs)(arr[i]);
	}
	printf("\nGia tri %d thoa dieu kien doan [-%d, %d] chua tat ca cac gia tri trong mang", x, x, x);
}
