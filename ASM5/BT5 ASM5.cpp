#include <stdio.h>
int main(){
	int x,n,y;
	do
	{
    	printf("Nhap vao so nguyen n lon hon 0: ");
		scanf("%d", &n);
    	if(n <= 0){
			printf("\nSo n phai lon hon 0, vui long nhap lai !");
    	}
	}while(n <= 0);
	x = n;
	do
	{
    y = x % 10;
	}while(x /= 10);
	printf("\nChu so dau tien cua %d là: %d",n,y);
}
