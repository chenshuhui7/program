#include<stdio.h>
#define number 6
int main (void)
{int i;
int num;
int tensu[number];
printf("数据个数： "); 
scanf("%d",&num);

    
for(i=0;i<num;i++)
{   printf("%d号：",i+1);
    scanf("%d",&tensu[i]);
   
}
printf("{");
for(i=0;i<num;i++)
{
    printf("%3d",tensu[i]);

}
printf("}");
return 0;

}
