//head不存放
#include<stdio.h>
#include<stdlib.h>
void insert();
void del();
void list();
void flushBuffer();

struct student{
  int id;
  char name[10];
  double score;
  struct student *next;
};
struct student *head, *ptr;

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
      case '3':printf("bye bye!!");break;
      case '4':del();break;
      default:printf("wrong choice!\n");
    }
  }while(choice!='3');
  return 0;
}

void insert(){
  struct student *current;
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