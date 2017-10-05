#include <stdio.h>
int main()
{   
    int a[10][10],i,j,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==j)&&(a[i][j]==1))
            {
                if((i!=j)&&(a[i][j]==0))
                {
                    count++;
                }
            }
        }
    }
    if(count==n)
    {
        printf("Unit mat");
    }
    else
    {
        printf("Not unit mat");
    }
    return 0;
}
