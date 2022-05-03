//1.insert node
//2.list node
//3.end
//4.delete node
//佇列先進先出 加入前端 刪除尾端列印 結束 刪除 
#include<stdio.h>
#include<stdlib.h>
void insert();
void list();
void flushBuffer();
struct student
{
  int id;
  char name[10];
  double score;
  struct student *next;
};
struct student *head, *ptr,*current;
void insert()
{
  ptr=(struct student*)malloc(sizeof(struct student));
  printf("Enter student data\n");
  printf("id:");
  scanf("%d",&ptr->id);
  printf("name:");
  scanf("%s",ptr->name);
  printf("score:");
  scanf("%lf",&ptr->score);
  while(getchar()!='\n') continue;
  ptr->next=head->next;
  head->next=ptr;
}
void list()
{
  struct student *current;
  if(head->next==NULL)
  printf("linked list is empty!\n");
  else
  {
    current=head->next;
    printf("\n linked list data:\n");
    while(current!=NULL)
    {
      printf("%-10d %-10s %-10.2f\n",current->id,current->name,current->score);
      current = current->next;
    }
  }
}
/* 定義del()，此函數不接受任何參數，且不傳回任何值 */
/* 刪除鏈結串列後端資料 */
void del()
{
    struct student *current,*prev;
    prev=head;
    current = head->next ;

    /* 判斷鏈結串列是不是空的 */
    if (current == NULL)
        printf("The linked list is empty !!!\n");
    else {
        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }
        prev->next = NULL;  /* 將後端的節點刪除 */     
        printf("\n<< Delete a student data >>\n");
        printf("%-10d %-10s %-10.2f\n", 
                current->id, current->name, current->score);    
        free(current);
    }
}

int main()
{
  char choice;
  head=(struct student*)malloc(sizeof(struct student));
  head->next=NULL;
  do{
    printf("1.insert node\n");
    printf("2.list node\n");
    printf("3.end\n");
    printf("4.delete node\n");
    printf("Enter choice:");
    choice = getchar();
    while(getchar()!='\n')continue;
    switch(choice)
    {
      case '1':insert();break;
      case '2':list();break;
      case '3':printf("end!!");break;
      case '4':del();break;
      default:printf("wrong choice!\n");
    }
  }while(choice!='3');
  return 0;
}

