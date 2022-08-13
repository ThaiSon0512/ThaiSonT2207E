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
	int phantu;
    printf("\nNHAP PHAN TU CAN TIM KIEM: ");
    scanf("%d",&phantu);
    int t=0;
    for(int i = 0; i < n; i++){
        if(phantu == arr[i]){
            printf("vi tri phan tu can tim %d \n",i);
            t++;
        }
    }
    if(t == 0){
        printf("\nkhong tim thay phan tu");
    }
}
