#include <stdio.h>
void transpose(int a[50][50],int *b,int *c)
{
    int tmp,d;
    d=(*b>*c)?*b:*c;
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<=i;j++)
        {
            tmp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=tmp;
        }
    }
    tmp=*b;
    *b=*c;
    *c=tmp;
    return;
}
int main()
{
    int r,c;
    int a[50][50];
    printf("Enter number of rows  ");
    scanf("%d",&r);
    printf("Enter number of columns  ");
    scanf("%d",&c);
     printf("Enter matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    
    transpose(a,&r,&c);
    
   for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;

    
}
