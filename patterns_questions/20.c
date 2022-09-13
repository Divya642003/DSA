#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        printf("\n");
        if(i==0||i==4)
        {
            for(j=0;j<4;j++)
            printf("*");
        }
        else{
              
              printf("*");
              for(k=0;k<2;k++)
              {
                printf(" ");
              }
              printf("*");
        }
        
    }
}