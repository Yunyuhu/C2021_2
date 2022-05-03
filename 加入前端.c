// //1.insert node
// //2.list node
// //3.end
// //加入前端 列印 結束 
// /* ex11-4c.c */
// #include <stdio.h>
// #include <stdlib.h>
// void insert();
// void list();
// void flushBuffer();


// struct student {
//     int id;
//     char name[10];
//     double score;
//     struct student *next;    /* 指向下一個鏈結 */
// };
// /* 定義結構指標，head指向第一個鏈結 */
// struct student *head, *ptr;


// int main()
// {
//     char choice;   
//     head = (struct student *) malloc(sizeof(struct student));
//     head->next = NULL;    /* head指向的節點不存任何資料 */


//     do {
//          /* 使用選項讓使用者選擇新增、列印或結束 */
//          printf("\n1 =>新增一節點\n");
//          printf("2 =>列印串列的所有節點\n");
//          printf("3 =>結束\n");
//          printf("請選擇一項目: ");
//          choice = getchar();  /* 輸入選項 */
//          flushBuffer();       //清空記憶體 
//          switch(choice) {
//             case '1':insert(); 
//                      break;
//             case '2':list();
//                      break;
//             case '3':printf("Bye bye!!");
//                      break;
//             default: printf("選項錯誤!!\n");
//          }
//      } while(choice != '3');  /* 選擇為 3 則跳出迴圈 */
//      return 0;
// }


// /* 定義insert()，此函數不接受任何參數，且不傳回任何值 */
// /* 新增一筆資料於鏈結串列的前端 */
// void insert()
// {
//      /* 以malloc( )函數配置記憶體 */     
//      ptr = (struct student *) malloc(sizeof(struct student)); 
//      printf("\n<< 加入一學生資料 >>\n");
//      printf("ID <int> : ");
//      scanf("%d", &ptr->id);
//      printf("姓名 <string> : ");
//      scanf("%s", ptr->name);
//      printf("分數 <double> : ");
//      scanf("%lf", &ptr->score);
//      flushBuffer();     //清空記憶體 
//      /* 加入前端的步驟 */
//      ptr->next = head->next;
//      head->next = ptr;
// }


// /* 定義list()，此函數不接受任何參數，且不傳回任何值 */
// /* 列印資料於螢幕 */
// void list()
// {
//      struct student *current;
//      if (head->next == NULL)
//          printf("目前串列的資料是空的\n");
//      else {
//          current = head->next;       /* 將node指向head */
//          printf("\n<< 目前的串列資料如下: >>\n");
//          /* 列印資料直到current為空指標 */
//          while (current != NULL) {
//              printf("%-10d %-10s %-10.2f\n", current->id, 
//                     current->name, current->score);
//              current = current->next;
//          }
//     }
// }

// void flushBuffer()
// {
//     while (getchar() != '\n')
//          continue;
// }
