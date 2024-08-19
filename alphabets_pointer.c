#include <stdio.h>
#include<math.h>
int main()
{
int a=65;
int *ptr=&a;
for(int i=0;i<26;i++)
{
    printf("%c ",*ptr);
    (*ptr)++;
}
return 0;
}