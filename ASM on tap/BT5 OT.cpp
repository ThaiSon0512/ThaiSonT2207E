#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap n so:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int b[n];
	int x=1;
	b[0]=arr[0];
	for(int i=1;i<n;i++){
		int dem=0;
		for(int j=0;j<x;j++){
			if(arr[i]==b[j])
				dem++;
		}
		if(dem==0){
			b[x]=arr[i];
			x++;
		}
	}
	int c[x];
	for(int i=0;i<x;i++)
		c[i]=0;
	for(int i=0;i<x;i++){
		for(int j=0;j<n;j++){
			if(arr[j]==b[i])
				c[i]++;
		}
	}
	int max=c[0], vtri=0, y=1;
	for(int i=1;i<x;i++){
		if(c[i]>max){
			max=c[i];
			vtri=i;
			y=1;
		}
		if(c[i]==max){
			y++;
		}       
	}
	if(y==1){
        printf("\nPhan tu xuat hien nhieu nhat la: %d ",b[vtri]);
    }
	else{
		int d[y];
		int z=0;
		for(int i=0;i<x;i++)
			if(c[i]==max){
				d[z]=i;
				z++;
			}
        printf("\nPhan tu xuat hien nhieu nhat la: %d ",b[d[y]]);
    }
}
