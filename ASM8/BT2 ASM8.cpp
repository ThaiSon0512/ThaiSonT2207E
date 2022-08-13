#include <stdio.h>
int chuViTamGiac(int a, int b, int c){
	int p;
	if(a+b>c && a+c>b && b+c>a){
		p = a+b+c;
		return p;	
	}
	printf("Day khong phai do dai ba canh tam giac\n");
	return 0;
}
int main(){
	int x;
	printf("Nhap x = ");
	scanf("%d",&x);
	int y;
	printf("Nhap y = ");
	scanf("%d",&y);
	int z;
	printf("Nhap z = ");
	scanf("%d",&z);
	int p;
	p = chuViTamGiac(x,y,z);
	printf("Chu vi tam giac = %d\n",p);
}
