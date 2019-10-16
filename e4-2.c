#include <stdio.h>

int main(void)
{
    int a;
    int b;
   printf("请输入两个整数。");
   printf("整数a:");  scanf("%d",&a);
   printf("整数b:");  scanf("%d",&b);

       int c;
       int d;

      if(a<b){
            c=a; d=b;}
      else  c=b; d=a;
      int sum=0; 
      int sw=c;
      for(;c<=d;c++)
      sum+=c;
      printf("大于等于%d小于等于%d的所有整数的和是%d。",sw,d,sum);

      return 0;
   }
