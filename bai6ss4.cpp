#include <stdio.h>
int main(){
  int n1,n2,n3;
  printf("Nhap vao 3 so nguyen: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  int max1 = (n1>n2) ? n1 : n2;
  int max2 = (max1>n3) ? max1 : n3;
  int min1 = (n1<n2) ? n1 : n2;
  int min2 = (min1<n3) ? min1 : n3;
  int conlai ;
  if (max2>n1 && n1>min2){
  	conlai=n1;
  }
 else if (max2>n2&&n2>min2){
    conlai=n2;
  }else if (max2>n3&&n3>min2){
 	conlai=n3;
  }
    printf("%d %d %d",max2,conlai,min2);
}
//truong hop 4 so lam tuong tu nhu tren them 1 so dieu kien la duoc
