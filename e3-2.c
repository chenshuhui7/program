#include<stdio.h>

int main(void)
{
    int no=35;

    printf("请输入一个整数：35");
    scanf("%d",&no);

    if(no==0)
       puts("该整数为0。");
   else if(no>0)
       puts("该整数为正数。");
   else if(no<0)
       puts("该整数为负数。");

   return 0;

}
    
