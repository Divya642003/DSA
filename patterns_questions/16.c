#include<stdio.h>
int main()
{
    
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char temp='A';
         printf("\n");
        for(j=0;j<5-i;j++)
        {
            printf(" ");
        }
         for(k=i*2-1;k>0;k--)
        {
            printf("%c",temp++);
        }
       
    }
    return 0;
}