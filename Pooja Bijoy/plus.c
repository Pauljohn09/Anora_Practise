#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int p=(2*(n-1))+1;
    for(int i=1;i<=p;i++)
    {
        if(i==n)
        {
            for(int j=1;j<=p;j++)
            printf("* ");
            printf("\n");
            continue;
        }
        for(int i=1;i<n;i++)
    {
        printf("  ");
    }
    printf("*");
    printf("\n");
    }
}