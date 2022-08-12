#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	float p,s;
	printf("Nhap a=");
	scanf("%f",&a);
	printf("Nhap b=");
	scanf("%f",&b);
	printf("Nhap c=");
	scanf("%f",&c);
	if(a+b>c && a+c>b && b+c>a){
		p = a+b+c;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Chu vi va dien tich cua tam giac: %.2f %.2f", p, s);
	}else{
		printf("Day khong phai la do dai ba canh cua mot tam giac");
	}
}
