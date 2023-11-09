#include<stdio.h>
int main(){
	int thang,nam;
	printf("nhap nam:");
	scanf("%d",&nam);
	printf("nhap thang:");
	scanf("%d",&thang);
	if (thang==2&&nam%4==0){
		printf("co 29 ngay");
	}
	else if (thang==2&&nam%4!=0){
		printf("co 28 ngay");
	}
	else if (thang==4||thang==6||thang==9||thang==11){
		printf("co 30 ngay");
	}
	else {
		printf("co 31 ngay");
	}
	
	}
