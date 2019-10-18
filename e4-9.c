#include<stdio.h>
int main(void)
{   int no,i=0;

    printf("正整数：");
    scanf("%d",&no);
    while(i<no)
     {    i+=1;
          if((i%2)==1)
        printf("+");
        else
        printf("-"); }
        if(no==0)
        printf("%d",no);
  
    return 0;  

 }   
