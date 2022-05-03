#include<stdio.h>
#include <math.h>
#define PI 3.14159265
double polygonArea(int n,double s){
 double Area=(n*(s*s))/(4*tan(PI/n));
 return Area;
}

int main(){
  int n;
  double s;
  printf("請輸入多邊形的邊長：");
  scanf("%lf",&s);
  printf("請輸入多邊形有幾邊：");
  scanf("%d",&n);
  polygonArea(n,s);

  printf("%d邊形的邊長為%.2f，其面積為%.2f",n,s,polygonArea(n,s));
  return 0;
}