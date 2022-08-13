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
	int max = 0;
	int min = 0;
	for(int i = 0; i < n; i++){
		max = (arr[i] > max) ? arr[i] : max;
		min = (arr[i] < min) ? arr[i] : min;
	}
	 printf("\n[ %d , %d ] la doan chua cac gia tri trong mang\n", min, max);
}
