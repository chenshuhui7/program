
int main(void)
{    
    int A,B,C;
    puts("请输入三个整数。");
    printf("整数A:");scanf("%d",&A);
    printf("整数B:");scanf("%d",&B);
    printf("整数C:");scanf("%d",&C);

    if(A==B&&B==C)
    puts("三个值都相等。");
    else if(A==B||B==C||A==C)
    puts("有两个值相等。");
    else 
    puts("三个值各不相等");

    return 0;
}
