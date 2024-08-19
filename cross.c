#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter n");
    scanf("%d",&n);
    m=(2*n)-1;
    for(int i=0;i<m;i++)
    {
        if(i==(n-1))
        {
            for(int j=0;j<m;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(int j=0;j<m;j++)
            {
                if(j==(n-1))
                printf("*");
                else
                printf(" "); 
                
            }
            printf("\n");
        }
    }
    return 0;
}
