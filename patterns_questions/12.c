#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    int temp=i;
        printf("\n");
        for(j=1;j<=i;j++)
        {
          printf("%d",j);
        }
        for(k=1;k<=2*(n-i);k++)
        {
            printf(" ");
        }
        while(temp!=0)
        {
        printf("%d",temp);
        temp--;
        }
    }
}