#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap n so:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=n-1 ; i<n ; i-- ){
		if( arr[i]%2!=0){
		printf("\nSo le cuoi cung trong mang la: %d",arr[i]);          
        break;
        }
	}
}
