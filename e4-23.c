#include<stdio.h>
int main(void)
{
    int i,j,len;
    puts("生成直角在右上方的等腰直角三角形。");
    printf("短边："); scanf("%d",&len);
    for(i=1;i<=len;i++)
    {
   for(j=0;j<=i-1;j++)
     
      putchar(' ');

    for(j=len-i+1;j>0;j--)
     
     putchar('*');
     putchar('\n');
    
    }
     return 0;

}

#include<stdio.h>
int main(void)
{
    int i,j,len;
    puts("生成直角在左上方的等腰直角三角形。");
    printf("短边："); scanf("%d",&len);
    for(i=1;i<=len;i++)
    {
   
    for(j=len-i+1;j>0;j--)
     
     putchar('*');
     putchar('\n');
    
    }
     return 0;

}
