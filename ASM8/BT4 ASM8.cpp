#include <stdio.h>
int BCNN(int a,int b){
	int bc;
	for (bc=a;bc<=a*b;bc++){
		if (bc%a==0 && bc%b==0){
			return bc;
		}
	}
}
int main(){
	int x;
	printf("Nhap x = ");
	scanf("%d",&x);
	int y;
	printf("Nhap y = ");
	scanf("%d",&y);
	int s;
	s = BCNN(x,y);
	printf("Boi chung nho nhat cua %d va %d = %d",x,y,s);
}

