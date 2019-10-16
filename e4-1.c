#include<stdio.h>

int main(void)
{
    int no;
    int retry;
    do{
        printf("请输入一个整数：");
        scanf("%d",&no);
        if(no>0)
           puts("该整数是正数。");
        else if (no<0)
           puts("该整数是负数。");
        else
           puts("该整数是0");

           printf("是否继续？<yes...0/no...9>:");
           scanf("%d",&retry);
           
    }   while(retry==0);

    return 0;
}
