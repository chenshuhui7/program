#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("开始数值："); scanf("%d",&a);
    printf("结束数值："); scanf("%d",&b);
    printf("间隔数值："); scanf("%d",&c);
    int sw;
    for(sw=a;sw<b;sw+=c)
    {printf("%dcm   ",sw);
     double se;
     se=(sw-100)*0.9;
    printf("  %.2fkg\n",se); 
}

return 0;
}
