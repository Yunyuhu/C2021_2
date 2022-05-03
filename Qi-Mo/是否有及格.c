#include <stdio.h>
void calender();
int main(void) {
  calender();
  return 0;
}
void calender(){
  int num;
  printf("輸入整數");
  scanf("%d",&num);
  if (num>=60)
  printf("pass");
  else
  printf("down");
}
