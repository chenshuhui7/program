#include  <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个正整数：");
    scanf("%d",&no );
    printf("%d的位数是",no);
    int a=0;
    while(no>0){
        no/=10;
        a++;

    }
printf("%d",a);
return 0;

}
