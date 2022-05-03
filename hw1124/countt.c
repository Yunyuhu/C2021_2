#include <stdio.h>

void triangle(int num){
  for(int i=1;i<=num;i++){
		for(int j=0;j<num-i;j++){
		   printf("  ");
		}
		for(int n=i;n>0;n--){
		   printf("%2d",n);
		}
		printf("\n");
	}
}


int main(){
  int num;
  printf("請輸入數字:");
  scanf("%d",&num);
  triangle(num);
	
	return 0;
}