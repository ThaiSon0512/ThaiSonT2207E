#include <stdio.h>
int main(){
	int a,b,c;
	printf ("nhap a= "); scanf("%d",&a);
	printf ("nhap b= "); scanf("%d",&b);
	printf ("nhap c= "); scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("so lon nhat trong 3 so la %d",a);
		}
	}
	else
	{
		if(b>c)
		{
			printf("so lon nhat trong 3 so la %d",b);
		}
		else
		{
			printf("so lon nhat trong 3 so la %d",c);
		}
	}
}
