#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        {
            if((i+j)%2==0||i==j)
            {
                printf(" 1");
            }
            else
            {
                 printf(" 0");
            }
        }
    }
}