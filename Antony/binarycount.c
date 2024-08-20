#include<stdio.h>
int main()
{
int n;
int count=0;
int num[100];
printf("Enter the number");
scanf("%d",&n);
int i=0;
for(n;n>0;n=n/2)
{

    num[i]=n%2;
    i++;
}
for(i=(i-1);i>=0;i--)
{
    if(num[i]==1)
    count=count+1;
}
printf("%d",count);
return 0;
}