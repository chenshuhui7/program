#include <stdio.h>
int main(void)
{
    int no;
    printf("整数值：");
    scanf("%d",&no);
   int i,sw=0;
   for(i=1;i<+no;i++)
   {
       sw=i*i;
       printf("%d的二次方是%d\n",i,sw);
    
   }  return 0;

}
