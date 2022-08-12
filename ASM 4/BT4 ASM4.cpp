#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int x = 0;
	while(n != 0){
		x = x*10 + n%10;
		n = n/10;
	}
	printf("So nghich dao la: %d",x);
}
