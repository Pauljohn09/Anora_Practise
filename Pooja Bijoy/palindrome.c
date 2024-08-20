#include <stdio.h>
#include<math.h>
int main()
{
    int n,m;
    int s=0;
    printf("Enter the number");
    scanf("%d",&n);
    m=n;
    for(m;m!=0;m=m/10)
    {
        s=(s*10)+(m%10);
    }
    if(s==n)
    printf("%d is a palindrome",n);
    else
    printf("%d is not a palindrome",n);
    return 0;
}