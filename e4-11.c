int main(void)
{
    int no,a;
    do{
        printf("请输入一个正整数：");
        scanf("%d",&no);
    
        if(no<=0)
          puts("\a请不要输入非正整数。");

    } while (no<=0);

        a=no;
      printf("%d逆向显示的结果是",a);
    while(no>0){
        printf("%d",no%10);
        no/=10;

    } 
    puts("。");
    
    return 0;
}
