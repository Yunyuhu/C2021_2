#include <stdio.h>
int main(){
  int line1,line2,line3;
  printf("輸入三邊長:");
  scanf("%d %d %d",&line1,&line2,&line3); 

  _Bool a,b,c;

  a=line1+line2>line3;
  b=line1+line3>line2;
  c=line2+line3>line1;

  if (a && b && c){
    printf("%d, %d, %d 可構成一三角形\n",line1,line2,line3);
  }
  else{
    printf("%d, %d, %d 不可構成一三角形\n",line1,line2,line3);
  }
}