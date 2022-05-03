#include <stdio.h>
int main(){
  int i,j,temp;
  int arr[]={80,30,40,70,50,60};
  int list=sizeof(arr)/sizeof(int);
  printf("Befor sort:\n");
  for (i=0;i<list;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  printf("-----------------\n");
for (i=0;i<list;i++){
  for (j=0;j<list;j++){
    if(arr[j]<arr[j+1]){
      temp=arr[j+1];
      arr[j+1]=arr[j];
      arr[j]=temp;
    }
  }
  }
  for (i=1;i<list+1;i++){
    printf("%d ",arr[i]);
    
  }
  return 0;
}
