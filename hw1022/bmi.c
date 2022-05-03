#include <stdio.h>

int main(){
  double height;
  double weight;

  printf("輸入身高(公分）：");
  scanf("%lf",&height);
  printf("輸入體重（公斤）：");
  scanf("%lf",&weight);

  double heightbymeter=height/100;
  double bmi=weight/(heightbymeter*heightbymeter);
  printf("BMI=%.1f\n",bmi);

  if (bmi<18.5)
    printf("體重過輕\n");
  else if (bmi<24)
    printf("正常");
  else if (bmi<27)
    printf("過重");
  else if (bmi<30)
    printf("輕度肥胖");
  else if (bmi<35)
    printf("中度肥胖");
  else 
    printf("重度肥胖");
  return 0;
}