#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap canh a:");
	scanf("%d",&a);
	printf("nhap canh b:");
	scanf("%d",&b);
	printf("nhap canh c:");
	scanf("%d",&c);
	if(a==b&&b==c&&a==c){
	printf("tam giac deu");
	}else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a){
		printf("tam giac vuong");
	}else if (a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a&&a==b||b==c||c==a){
		printf("tam giac vuong can ");
	}else if(a==b||b==c||c==a){
		printf("tam giac can");
	}
	else{
		printf("tam giac thuong");
	}
	return 0;
	
}
