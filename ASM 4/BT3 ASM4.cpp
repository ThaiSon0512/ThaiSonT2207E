#include<stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
    scanf("%d",&n);
    int i;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
		}
		printf("Cac uoc so cua %d la: %d ",n,i);
	}
}
