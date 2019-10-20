#include<stdio.h>
int main(void)
{
    int no;
    printf("生成一个正方形\n");
    printf("正方形有几层：");
    scanf("%d",&no);
    int i,j;
    for(i=1;i<=no;i++)
    {   for(j=1;j<=no;j++)
        putchar('*');
        putchar('\n');

    }
      return 0;
}
