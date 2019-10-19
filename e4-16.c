#include<stdio.h>
int main(void)
{
    int no;
    printf("整数值：");
    scanf("%d",&no);
    int i;
    for(i=1;i<no;i+=2)
    {  
        printf("%d   ",i);
    }    return 0;
}
