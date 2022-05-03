//修改特定節點資料 

/* ex11-4e.c */
#include <stdio.h>
#include <stdlib.h>
void insert();
void del();
void list();
void modify();
void flushBuffer();


struct student
{
    int id;                /* ID號碼 */
    char name[10];         /* 學生姓名 */
    double score;          /* 學生分數 */
    struct student *next;  /* 指向下一個鏈結 */
};


/* 定義結構指標，head 指向第一個鏈結 */
struct student *head, *ptr, *current;


int main()
{
    char choice;
    head = (struct student *) malloc(sizeof(struct student));
    head->next = NULL;    /* head指向的節點不存任何資料 */
    do {
        /* 使用選項讓使用者選擇新增、刪除、列印或結束 */
        printf("\n1 =>新增一節點\n");
        printf("2 =>刪除一節點\n");
        printf("3 =>修改某一節點\n");
        printf("4 =>列印串列的所有節點\n");
        printf("5 =>結束\n");
        printf("請選擇一項目: ");
        choice = getchar();  /* 輸入選項 */
        flushBuffer();            /* 清空記憶體 */
        switch (choice){
            case '1': insert();
                    break;
            case '2': del();
                    break;
            case '3': modify();
                    break;
            case '4': list();
                    break;
            case '5': printf("Bye bye!!\n");
                    break;
            default:  printf("選項錯誤!!\n");
        }
    }  while (choice != '5');  /* 選擇為 5 則跳出迴圈 */
    return 0;
}


/* 定義 insert()，此函數不接受任何參數，且不傳回任何值 */
/* 新增一筆資料於鏈結串列的前端 */
void insert()
{
    /* 以malloc()函數配置記憶體 */
    ptr = (struct student *) malloc(sizeof(struct student));
    printf("\n<< 加入一學生資料 >>\n");
    printf("ID <int> : ");
    scanf("%d", &ptr->id);
    flushBuffer();
    printf("姓名 <string> : ");
    scanf("%s", ptr->name);
    printf("分數 <double> : ");
    scanf("%lf", &ptr->score);
    flushBuffer();
    
    /* 加入於前端 */
    ptr->next = head->next;
    head->next = ptr;
}


/* 定義 del()，此函數不接受任何參數，且不傳回任何值 */
/* 刪除鏈結串列前端資料 */
void del()
{
    current = head->next ;
    /* 判斷鏈結串列是不是空的 */
    if (current == NULL)
        printf("鏈結串列是空的!!!\n");
    else {
        head->next = current->next;  /* 將前端的節點除 */
        printf("\n<< 被刪除學生的資料如下: >>\n");
        printf("%-10d %-10s %-10.2f\n", current->id, current->name,
                                        current->score);
        free(current);
    }
}


/* 定義 modify()，此函數不接受任何參數，且不傳回任何值 */
/* 修改鏈結串列某一節點的資料 */
void modify()
{
    current = head->next;
    int modifyId, updated = 0;
    double modifyScore;
    /* 判斷鏈結串列是不是空的 */
    if (current == NULL)
        printf("鏈結串列是空的!!!\n");
    else {
        printf("\n請輸入欲修改的 id: ");
        scanf("%d", &modifyId);
        flushBuffer();
        while (current != NULL) {
            if (current->id == modifyId) {
                printf("%d 原來的分數為 %.2f\n", current->id,
                                current->score);
                printf("請輸入欲修改的分數: ");
                scanf("%lf", &modifyScore);
                flushBuffer();
                current->score = modifyScore;
                updated = 1;
                printf("已修改此節點\n");
                break;
            }
            current = current->next;
        }
        
        /* 若updated 等於 0 表示找不到此節點 */
        if (updated == 0) {
            printf("找不到此節點\n");
        }
    }
}


/* 定義 list()，此函數不接受任何參數，且不傳回任何值 */
/* 列印資料於螢幕 */
void list()
{
    if (head->next == NULL)
        printf("目前串列無資料\n");
    else {
        current = head->next;       /* 將node指向head */
        printf("\n<< 目前的串列資料如下: >>\n");
        /* 列印資料直到current為空指標 */
        while (current != NULL) {
            printf("%-10d %-10s %-10.2f\n",
                        current->id, current->name, current->score);
            current = current->next;
        }
    }
}


/* 清空記憶體 */
void flushBuffer()
{
    while (getchar() != '\n') {
        continue;
    }
}
