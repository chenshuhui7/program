#include<stdio.h>
int main(void)
{
    int no;
    printf("整数值:");
    scanf("%d",&no);
    int i,sum=0;
    for(i=1;i<=no;i++)
    {   
        if(no%i==0)
        
       { printf("%d\n",i);

        sum+=1;}
    }
   printf("约数有%d个。",sum);
   return 0;
}
