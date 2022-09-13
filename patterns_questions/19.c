#include<stdio.h>
int main()
{
     int i,j,n;
    scanf("%d",&n);
    int u=1;
     for(i=0;i<2*n-1;i++)
    {    
         printf("\n");
        if(i<n)
        {
           for(j=0;j<=i;j++)
            {
            printf("*");
            }
            
           for(int k=i+1;k<2*n-(i+1);k++)
            {
                printf(" ");
            }
          
           for(j=2*n-(i+1);j<2*n;j++)
            {
            printf("*");
            }
        }
          else
          {
        for(j=0;j<n-u;j++)
        {
          printf("*");
         
        }
        for(int k=2*(i+1-n);k>0;k--)
        {
          printf(" ");
         
        }
      for(j=2*n-1;j>i;j--)
        {
          printf("*");
         
        }
    u++;
    }
    
    }
  
}