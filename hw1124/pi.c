#include <math.h>
#include <stdio.h>
void allpi(){
  int i,j;
  double pi=0, countpi=0;
    for (i=1;i<=200001;i+=5000){
      for(j=1;j<=i;j++){
        countpi+=(pow(-1,j+1)/((2*j)-1));
      }
      pi=countpi*4;
      printf("i = %6d, pi = %.8f\n",i,pi);
      pi=0;
      countpi=0;
    }
}
int main(){
  allpi();
  return 0;
}
