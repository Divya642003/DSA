#include<stdio.h>
int main()
{
    
    int i,j;
    for(i=0;i<9;i++)
    {
         printf("\n");
         if(i<5)
      {
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
      }
         else{
         for(j=9-i;j>0;j--)
        {
            printf("* ");
        }
         }
       
    }
    return 0;
}