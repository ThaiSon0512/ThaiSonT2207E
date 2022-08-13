#include <stdio.h>
int main(){
	for(int i=1;i<=5;i++){
		for(int j=0;j<i;j++){
			printf(" ",j);
			for(int k=0;k<i;k++){
				printf("*",k);
			}
		}
		printf("\n");
	}
}
