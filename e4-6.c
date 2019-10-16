#include <stdio.h>
int main(void)
{
    int i=0,no;
    printf("请输入一个整数：");
    scanf("%d",&no);
    while(i<(no-2))
    i+=2;
    printf("%d",i);

    return 0;


}
