#include<stdio.h>
int main(){
	float luong,ngaycong, luongnhan;
	printf("nhap luong:");
	scanf("%f",&luong);
	printf("nhap so ngay cong:");
	scanf("%f",&ngaycong);
	if(ngaycong<=26){
	luongnhan = luong*(ngaycong / 26);
    printf("luong nhan duoc: %.2f", luongnhan);
}else if(ngaycong>26){
	luongnhan=luong*(ngaycong/26)+((luong*((ngaycong-26)/26)/100)*150);
 printf("luong nhan duoc:%.2f",luongnhan);}
}
