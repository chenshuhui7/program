#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数：");
    scanf("%d",&no);
    int b;
    for(b=1;b<=no;b++)
    printf("%d",b%10);
       return 0;
}
