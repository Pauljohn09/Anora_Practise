#include<stdio.h>
int main()
{ 
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d",a);
    printf("b=%d",b);

    return 0;
}
void swap(int*x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}