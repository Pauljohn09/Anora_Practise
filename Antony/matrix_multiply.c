#include <stdio.h>


char* multiply(int rA, int cA, int A[][cA], int rB, int cB, int B[][cB], int P[][cB])
{   
    int p=0;
    if(cA!=rB)
    {
        return "False";
    }
    else
    {
        for(int i=0;i<rA;i++)
        {
            for(int j=0;j<cB;j++)
            {
                for(int k=0;k<rB;k++)
                {
                    p=p+(A[i][k]*B[k][j]);
                }
                P[i][j]=p;
                p=0;
            }
        }
    }
    return "True\n";
}




int main()
{
    char * ptr;
    int rA,cA,rB,cB;
    printf("Enter number of rows of matrix A ");
    scanf("%d",&rA);
    printf("Enter number of columns of matrix A ");
    scanf("%d",&cA);
    int a[rA][cA];
    printf("Enter matrix A\n");
    for(int i=0;i<rA;i++)
    {
        for(int j=0;j<cA;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter number of rows of matrix B ");
    scanf("%d",&rB);
    printf("Enter number of columns of matrix B ");
    scanf("%d",&cB);
    int b[rB][cB];
    int p[rA][cB];
    printf("Enter matrix B\n");
    for(int i=0;i<rB;i++)
    {
        for(int j=0;j<cB;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    ptr = multiply(rA,cA,a,rB,cB,b,p);
    printf("%s",ptr);
    if(cA==rB)
    {
    for(int i=0;i<rA;i++)
        {
            for(int j=0;j<cB;j++)
            {
                printf("%d ",p[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}


