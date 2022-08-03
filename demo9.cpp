#include <stdio.h>
int main()
{
    int n;
    printf("Nhap do dai canh: ");
    scanf("%d", &n);
    int i, j;
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("* ");
        }
        printf("\n");
    }
}
	

