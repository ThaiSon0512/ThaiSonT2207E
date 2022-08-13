#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap n so:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int tm = 0;
	int kl = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			tm+=arr[i];
			if(tm>kl){
				kl = tm;
			}
		}else{
			tm = 0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat: %d",kl);
}
