#include <stdio.h>
int soTachRa(int a){
	int s = 0;
	int x;
	for(;a!=0;){
		x = a % 10;
		s += x;
		a /= 10;
    }
    return s;
}
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int s;
	s = soTachRa(n);
	printf("Tong cac chu so cua %d = %d",n,s);
}
