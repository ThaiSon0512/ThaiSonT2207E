#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int start = 0;
	int end = n - 1;
	int arr[n];
	printf("Nhap n so:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    while (start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	printf("\n\nMANG DUOC DAO NGUOC\n");
	for(int i = 0; i < n; i++){
		printf("%d \n",arr[i]);
	}
}
