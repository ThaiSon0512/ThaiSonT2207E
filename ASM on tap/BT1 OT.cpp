#include <stdio.h>
int main(){
	int n;
	float S;
	S = 0;
	do{
	printf("Nhap n= ");
	scanf("%d", &n);
	if(n < 1){
      printf("\nSo n phai lon hon hoac bang 1 !");
	}
	}while(n < 1);
	for(int i = 1; i <= n; i++){
	S = S + 1.0 / i;
	}
	printf("\nTong 1 + 1/2 + ... + 1/%d = %.2f",n, S);
}
