#include <stdio.h>
#include <math.h>
int main()
{
    int n,d=0;
    
    printf("Enter n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array");
    for(int i=(n-1);i>=0;i--)
    {
        
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        d=d+(a[i]*pow(2,i));
    }
    printf("%d",d);
    return 0;


}