//head要存放資料 
#include <stdio.h>
#include <stdlib.h>
void insert();  
void del();
void list();
void flushBuffer();

struct student {
    int id;                  /* ID號碼 */
    char name[10];           /* 學生姓名 */
    double score;            /* 學生分數 */
    struct student *next;    /* 指向下一個鏈結 */
};
/* 定義結構指標，head指向第一個鏈結 */
struct student *head=NULL, *ptr;

int main()
{
    char choice;    
    do {
        /* 使用選項讓使用者選擇新增、刪除、列印或結束 */
        printf("\n1 => 新增一節點\n");
        printf("2 => 刪除一節點\n");
        printf("3 => 列印串列的所有節點\n");
        printf("4 => 結束\n");
        printf("請選擇一項目: ");
        choice = getchar();   /* 輸入選項 */
        flushBuffer();   //清空記憶體 
        switch (choice) { 
            case '1': insert(); 
                      break;
            case '2': del(); 
                      break;
            case '3': list( );  
                      break;
            case '4': printf("Bye bye!!\n");
                      break;
            default : printf("Option error!!\n");
        }
    }  while (choice != '4');  /* 選擇為 4 則跳出迴圈 */
    return 0;
}

/* 定義insert()，此函數不接受任何參數，且不傳回任何值 */
/* 新增一筆資料於鏈結串列的前端 */
void insert()
{
    /* 以malloc()配置記憶體 */
    ptr = (struct student *) malloc(sizeof(struct student));
    printf("\n<< Insert a student data >>\n");
    printf("ID <int>: ");
    scanf("%d", &ptr->id);
    printf("name <string>: ");
    scanf("%s", ptr->name);
    printf("score <double>: ");
    scanf("%lf", &ptr->score);
    flushBuffer();   //清空記憶體
    if (head == NULL) {
        ptr->next = NULL;
        head = ptr;
    } else {
        ptr->next = head->next;
        head->next = ptr;
    }
 }

/* 定義del()，此函數不接受任何參數，且不傳回任何值 */
/* 刪除鏈結串列前端資料 */
void del()
{
    struct student *current;
    current = head;

    /* 判斷鏈結串列是不是空的 */
    if (current == NULL)
        printf("The linked list is empty !!!\n");
    else {
        head = current->next;  /* 將前端的節點刪除 */     
        printf("\n<< Delete a student data >>\n");
        printf("%-10d %-10s %-10.2f\n", 
                current->id, current->name, current->score);    
        free(current);
    }
}

/* 定義 list()，此函數不接受任何參數，且不傳回任何值 */
/* 列印資料於螢幕 */
void list()
{
    struct student *current; 
    if (head == NULL)
        printf("No data\n");
    else {
        current = head;       /* 將current指向head */
        printf("\n<< Listing student data >>\n");
        while (current != NULL) { /* 列印資料直到current為空指標 */
            printf("%-10d %-10s %-10.2f\n", current->id, 
                    current->name, current->score);
            current = current->next;
        }
    }
}

void flushBuffer()
{
	while (getchar() != '\n')
	    continue;
}

