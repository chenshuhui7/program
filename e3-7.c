.#include<stdio.h>

int main(void)
{
    int a,b,c,d,max;
    
    printf("输入a:");scanf("%d",&a);

    printf("输入b:");scanf("%d",&b);

    printf("输入c:");scanf("%d",&c);

    printf("输入d:");scanf("%d",&d);
  
  max=a; 
  if(b>max)
  max=b;
  if(c>max)
  max=c;
  if(d>max)
  max=d;

  printf("最大值：%d\n",max);

  return 0;

}
