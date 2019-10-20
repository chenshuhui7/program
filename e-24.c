#include<stdio.h>
int main(void)
{
    int no;
    printf("让我们来画一个金字塔。"); 
    printf("金字塔有几层：");  scanf("%d",&no);
    int i,j;
    for(i=1;i<=no;i++)
    {   for(j=1;j<=no-i;j++)
         printf(" ");

         for(j=1;j<=(i-1)*2+1;j++)
           putchar('*');
           putchar('\n');
    }
    return 0;
}
