#include <stdio.h>
int main()
{
    int num,dec=0,base=1,rem,bin;
    scanf("%d",&bin);
    num=bin;
    while(num>0)
    {
        rem=num%10;
        dec=dec+rem*base;
        num=num/10;
        base=base*2;
    }
    printf("%d",dec);
    return 0;
}
