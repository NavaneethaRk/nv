#include <stdio.h>
int main()
{
    int n,i,j,g;
    scanf("%d",&n);
    g=n*2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<g;j++)
        {
            if((i+j==(g/2))||(j-i==(g/2)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=g;j++)
        {
            if((i==j)||(j+i==(n*2)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
