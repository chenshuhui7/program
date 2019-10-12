#include<stdio.h>

int main(void)
{
    int A,B;
    puts("请输入两个整数。");
    printf("输入A:");scanf("%d",&A);
    printf("输入B:");scanf("%d",&B);

    if(A-B>=11||B-A>=11)
    puts("它们的差大于等于11");
    else
    puts("它们的差小于等于10");

    return 0;

}
