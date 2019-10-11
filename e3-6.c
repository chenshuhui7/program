#include<stdio.h>

int main(void)
{
    int a,b,c,min;
    printf("输入a：");scanf("%d",&a);

    printf("输入b:");scanf("%d",&b);

    printf("输入c:");scanf("%d",&c);

    min=a;
    if(b<a)
    min=b;
    if(c<b)
    min=c;
    printf("最小值是%d",min);

    return 0;


}
