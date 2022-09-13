#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    char temp='A';
    for(i=1;i<=n;i++)
    {    
        printf("\n");
        for(j=0;j<i;j++)
        {
          printf(" %c",temp);
        }
       temp++; 
    }
}