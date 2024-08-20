#include<stdio.h>

int main()
{
    int n,l=1,f=0,sum;
    printf("%d\n",f);
    printf("%d\n",l);
    sum=f+l;
    f=l;
    l=sum;
    while(sum<100)
    {
        printf("%d\n",sum);
        sum=f+l;
        f=l;
        l=sum;
    }
    return 0;
}