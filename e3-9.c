#include<stdio.h>

int main(void)
{
    int a,b,c,min;
    printf("输入a：");scanf("%d",&a);

    printf("输入b:");scanf("%d",&b);

    printf("输入c:");scanf("%d",&c);

    b<a?min=b:a;
    c<b?min=c:a;
    

    printf("最小值是：%d",min);

    return 0;


}
