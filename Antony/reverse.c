#include<stdio.h>
void rev(int n,int p[])
{
    for(int j=0;j<=((n-1)/2);j++)
    {
        int temp;
        temp=p[j];
        p[j]=p[(n-1)-j];
        p[(n-1)-j]=temp;
    }
    return;
}
int main()
{
    int n=5;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
        for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    rev(n,a);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}