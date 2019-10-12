#include<stdio.h>

int main(void)
{
    int month;

    printf("请输入月份：");
    scanf("%d",&month);

    switch (month/3){
        case 0: puts("该月是冬季。");  break;
        case 1: puts("该月是春季。");  break;
        case 2: puts("该月是夏季。");  break;
        case 3: puts("该月是秋季。");  break;
        case 4: puts("该月是冬季。");  break;

    }
     
     return 0;
}
