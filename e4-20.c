#include <stdio.h>
int main(void)
{
    printf("   |  1  2  3  4  5  6  7  8  9 \n");
    printf("--------------------------------\n");

    int i,j,sw; 
    for(i=1;i<=9;i++)
    {   printf("%d  |",i);
        for(j=1;j<=9;j++)
        {
            sw=i*j;
            printf("%3d",sw);
        }
          printf("\n");       
        

    }
      return 0;
}
