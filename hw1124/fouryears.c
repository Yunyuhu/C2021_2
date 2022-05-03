#include<stdio.h>
void isLeapYear(int startYear,int endYear){
  int i,count=0;
  for(i=startYear;i<=endYear;i++){
    if(i%400==0){
      printf("%5d",i);
      count++;
      if(count!=0 && count%10==0){
      printf("\n");
      }
    }
    else if(i%4==0 && i%100!=0){
      printf("%5d",i);
      count++;
      if(count!=0 && count%10==0){
      printf("\n");
      }
    }
  }
}
int main(){
  int startYear,endYear;
  
  printf("輸入起始年份：");
  scanf("%d",&startYear);
  printf("輸入結束年份：");
  scanf("%d",&endYear);

  
  printf("起始年份：%d\n",startYear);
  printf("結束年份：%d\n",endYear);
  printf("以下是閨年:\n");
  isLeapYear(startYear,endYear);
  return 0;
}