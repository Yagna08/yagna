#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(k=i;k<=(2*i)-1;k++)
        {
            printf("%d",k);
        }
        for(l=2*i-2;l>=i;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}