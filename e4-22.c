#include<stdio.h>
int main(void)
{
    int a,b;
    printf("让我们来画一个长方形。\n");
    printf("一边：");     scanf("%d",&a);
    printf("另一边：");   scanf("%d",&b);
    int max;
    if(a>b)
    max=a;
    else
    max=b;
    int i,j;
    for(i=1;i<=b;i++)
    {
        for (j=1;j<=a;j++)
        putchar('*');
        putchar('\n');
    }
    return 0;

}
