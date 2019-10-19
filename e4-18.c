#include<stdio.h>
int main(void)
{
    int no;
    printf("显示多少个*：");
    scanf("%d",&no);
    int i;
    for(i=1;i<=no;i++)
  {    putchar('*');
       if(i%5==0)
       putchar('\n');
     
    
     
  }
  return 0;
    

}
