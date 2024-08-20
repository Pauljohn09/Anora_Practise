#include <stdio.h>
#include<math.h>
int main()
{
    int n,d,m;
    d=0;
    int s=0;
    printf("Enter the number");
    scanf("%d",&n);
    m=n;
    for(m;m!=0;m=m/10)
    {
        d++;
    }
    m=n;
    for(m;m!=0;m=m/10)
    {
        s=s+pow((m%10),d);
    }
    if(s==n)
    printf("%d is an armstrong number",n);
    else
    printf("%d is not armstrong number",n);
    return 0;
}