#include<stdio.h>
int main(){
    int n;
    int x;
    int s = 0;
    printf("Nhap n= ");
    scanf("%d",&n);
    for(;n!=0;){
        x = n % 10;
        s += x;
        n /= 10;
    }    
    printf("Tong cac chu so la: %d",s);
}
