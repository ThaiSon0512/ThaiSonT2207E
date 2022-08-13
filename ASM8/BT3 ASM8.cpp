#include <stdio.h>
int	UCLN(int a, int b){
	int tmp;
	while(b != 0){
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int main(){
	int x;
	printf("Nhap x = ");
	scanf("%d",&x);
	int y;
	printf("Nhap y = ");
	scanf("%d",&y);
	int s;
	s = UCLN(x,y);
	printf("Uoc chung lon nhat cua %d va %d = %d",x,y,s);
}

