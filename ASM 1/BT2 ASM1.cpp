#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Pt vo so nghiem");
			}else{
				printf("Pt vo nghiem");
			}
		}else{
			float x = -c/(float)b;
			printf("Pt co nghiem: %d",x);
		}
	}else{
		int d = b*b-4*a*c;
		if(d<0){
			printf("Pt vo nghiem");
		}else{
			if(d==0){
				float x = -(float)b/(2*a);
				printf("x1 = x2 = %d",x);
			}else{
				float x1 = (-b+sqrt(d))/(2*a);
                float x2 = (-b-sqrt(d))/(2*a);
                printf("x1 = %f va x2 = %f",x1,x2);
			}
		}
	}
}	
