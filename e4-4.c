#include<stdio.h>
int main(void)
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d",&no);

    while (no>=1)
    printf("%d",no--);
    if (no<0)
    printf("");
    else
    printf("\n");
    
    return 0;

}
