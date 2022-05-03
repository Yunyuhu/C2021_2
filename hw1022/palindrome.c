#include <stdio.h>
int main(){
  int num,pal;
  printf("請輸入三位數的整數：");
  scanf("%d", &num);
  if (num>1000)
    printf("為無效數字");
  else{
    pal=(num%10*100)+(num/10%10*10)+num/100;
    if (num==pal){
      printf("%d是一個迴文數字\n", num);}

    else{
      printf("%d不是一個迴文數字\n", num);}
  }
  return 0;
}