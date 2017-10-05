#include <stdio.h>
void copy(char [],char [],int);
int main()
{
    char a[20], b[20];
    gets(a);
    copy(a,b,0);
    printf("%s",b);
    return 0;
}
void copy(char a[],char b[],int n)
{
    b[n]=a[n];
    if(a[n]=='\0')
    return 0;
    else
    return copy(a,b,n+1);
}
