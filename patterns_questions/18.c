#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
     
    for(i=0;i<2*n;i++)
    {    
        printf("\n");
        if(i<n)
        {
        for(j=n-i;j>0;j--)
        {
          printf("*");
         
        }
        for(int k=2*i;k>0;k--)
        {
          printf(" ");
         
        }
        for(j=n-i;j>0;j--)
        {
          printf("*");
         
        }
        }
        else
       {
           for(j=0;j<i-4;j++)
            {
            printf("*");
            }
            int temp=i-4;
           for(int k=temp;k<2*n-temp;k++)
            {
                printf(" ");
            }
          
           for(j=2*n-temp;j<2*n;j++)
            {
            printf("*");
            }
    
        } 
        
    }
     

  
}