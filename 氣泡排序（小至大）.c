// #include <stdio.h>
// int main(){
//   int i,j,k,temp;
//   int arr[]={80,30,40,70,50,60};
//   int list=sizeof(arr)/sizeof(int);
//   printf("Befor sort:\n");
//   for (i=0;i<list;i++){
//     printf("%d ",arr[i]);
//   }
//   printf("\n");
//   printf("-----------------\n");
// for (i=0;i<list;i++){
//   int open=0;
//   for (j=0;j<list;j++){
//     if(arr[j]>arr[j+1]){
//       open=1;
//       temp=arr[j];
//       arr[j]=arr[j+1];
//       arr[j+1]=temp;
//     }
//   }
//   printf("第%d次：\n",i+1);
//     for (k=0;k<list;k++){
//       printf("%d ",arr[k]);
//     }
//     printf("\n");
//   if(open==0){
//     break;
//   }
//   }
//   printf("-----------------\n");
//   printf("After sort:\n");
//   for (i=0;i<list;i++){
//     printf("%d ",arr[i]);
//   }
// }