#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,s,p,d;
	printf("Input edges of triangle : \n");
	scanf("%f%f%f",&a,&b,&c);
	if(a<b+c && b<a+c && c<a+b){
		d = a + b + c;
		p = d/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Perimeter of triangle : %f ,Half perimeter of triangle : %f, Area of triangle : %f",d,p,s);
	}else{
		printf("Error! Not an Triangle");
	}
}
