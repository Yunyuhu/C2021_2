#include <stdio.h>
#include <math.h>

int main(){
  int dotx, doty, radius;
  double line;

  printf("請輸入x,y座標：");
  scanf("%d %d",&dotx,&doty);
  printf("請輸入圓半徑:");
  scanf("%d",&radius);

  line=pow(pow(dotx,2)+pow(doty,2),0.5);
  if (line<=radius){
    printf("點座標(%d, %d)在圓內\n",dotx, doty);
  }
  else{
    printf("點座標(%d, %d)不在圓內\n",dotx, doty);
  }
  return 0;
}