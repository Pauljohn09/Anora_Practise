#include<stdio.h>
void spc(int d)
{
    for(;d>0;d--)
    {
        printf("   ");
    }
    return;
}
int main()
{
    int n=10;
    int l=n;
    for(int i=0;i<n;i+=1)
    {
        if((i==0)||(i==(n-1)))
        {
            for(int j=0;j<n;j++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("*");
            for(int k=0;k<(n-2);k++)
            {printf("  ");}
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}