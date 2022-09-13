#include<stdio.h>
int main()
{
    
    int i,j,k;
    for(i=1;i<=5;i++)
    {
         printf("\n");
        for(j=0;j<5-i;j++)
        {
            printf(" ");
        }
         for(k=i*2-1;k>0;k--)
        {
            printf("*");
        }
       
    }
    return 0;
}