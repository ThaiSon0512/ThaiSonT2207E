#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int i;
	for(i = 1;i < n;i += 2){
		printf(" %d",i);
	}
}
