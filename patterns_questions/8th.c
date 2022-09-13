#include<stdio.h>
int main()
{
    int n=5;
    int i,j,k;
    for(i=0;i<5;i++)
    {
         printf("\n");
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
         for(k=2*(n-i)-1;k>0;k--)
        {
            printf("*"); 
        }
    }
    
    return 0;
}