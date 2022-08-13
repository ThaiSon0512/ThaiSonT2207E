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
	int avg,x=0;
	int y=0;
	for( int i=0 ; i<n ; i++ ){
		if(arr[i]%2==1){
			x=x+arr[i];
			i+=2;
			y++;
		}
	}
	avg=int(x/y);
	printf("Trung binh cong cac so le o vi tri chan trong mang= %d",avg);
}
