#include <stdio.h>
int main(void)
{
    int no;
    printf("n的值：");
    scanf("%d",&no);
    int i=1,sum=0;
    for(;i<no;i++)
    sum+=i;


printf("1到%d的和为%d。",no,sum);

 return 0;
}
