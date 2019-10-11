#include<stdio.h>

int main(void)
{
    int A=54,B=12;
    puts("请输入两个整数。");
    printf("整数A:%d",A);
    printf("整数B:%d",B);

    if(A>B)
        puts("A大于B。");

    else if(A=B)
         puts("A等于B。");
    
    else
        puts("A小于B。");

    return 0;
    



}
