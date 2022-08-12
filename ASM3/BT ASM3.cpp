#include<stdio.h>
int main(){
	int ngay, thang;
	int t1 = 31, t2 = 28, t3 = 31, t4 = 30, t5 = 31, t6 = 30, t7 = 31, t8 = 31, t9 = 30, t10 = 31, t11 = 30, t12 = 31;
	printf("Ngay: ");
	scanf("%d", &ngay);
	printf("Thang: ");
	scanf("%d", &thang);
	if (thang == 1) { ngay = ngay; }
	else if (thang == 2) { ngay = t1 + ngay; }
	else if (thang == 3) { ngay = t1 + ngay + t2; }
	else if (thang == 4) { ngay = t1 + ngay + t2 + t3; }
	else if (thang == 5) { ngay = t1 + ngay + t2 + t3 + t4; }
	else if (thang == 6) { ngay = t1 + ngay + t2 + t3 + t4 + t5; }
	else if (thang == 7) { ngay = t1 + ngay + t2 + t3 + t4 + t5 + t6; }
	else if (thang == 8) { ngay = t1 + ngay + t2 + t3 + t4 + t5 + t6 + t7; }
	else if (thang == 9) { ngay = t1 + ngay + t2 + t3 + t4 + t5 + t6 + t7 + t8; }
	else if (thang == 10) { ngay = t1 + ngay + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9; }
	else if (thang == 11) { ngay = t1 + ngay + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10; }
	else if (thang == 12) { ngay = t1 + ngay + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10 + t11; }
		printf("ngay thu %d trong nam", ngay);
	{
        switch ((thang, ngay)%7)
        {
        	case 0: printf("\nChu nhat");break;
            case 1: printf("\nThu hai");break;
            case 2: printf("\nThu ba");break;
            case 3: printf("\nThu tu");break;
            case 4: printf("\nThu nam");break;
            case 5: printf("\nThu sau");break;
            default: printf("\nThu bay");
            }
        }
}
