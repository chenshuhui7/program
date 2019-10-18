#include <stdio.h>
int main(void)
{
    int no,a=1;
    printf("请输入一个整数：");
    scanf("%d",&no);

    while((a*2)<no)
    {
    a=2*a;
    
    printf("%d  ",a);}

    return 0;



}
