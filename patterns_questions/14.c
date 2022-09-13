#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {    char temp='A';
        printf("\n");
        for(j=0;j<=n-i;j++)
        {
          printf(" %c",temp++);
        }
        
    }
}