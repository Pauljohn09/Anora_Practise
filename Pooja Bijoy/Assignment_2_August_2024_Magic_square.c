#include<stdio.h>
int main()
{
int n,c,r=0,arr[10][10]={0};
printf("Enter the size of matrix: ");
scanf("%d",&n);
c=n/2;
if(n<=0 || n%2==0)
{
printf("\n***** Please enter a odd positive value *****\n");
return 0;
}
arr[r][c]=1;
r--;
c++;
 for (int i=2;i<=n*n;i++,c++,r--)
 {
    if(r<0 && c>n-1)
    {
    r=r+2;
    c=c-1;
    }
    if(r<0)
    {
    r=n-1;
    }
    if(c>n-1)
    {
    c=0;
    }
    if(arr[r][c]!=0)
    {
    r+=2;
    c-=1;
    }
    arr[r][c]=i;

}
for(int i=0;i<n;i++)
{
 for(int j=0;j<n;j++)
 {
 printf("%d\t",arr[i][j]);
 }
 printf("\n");
}
return 0;
}

