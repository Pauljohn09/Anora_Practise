#include<stdio.h>
struct Rectangle
{
    int width;
    int height;
    int* area;
};

void calculateArea(struct Rectangle r)
{
    r.width=40;
    r.height=20;
    *(r.area)=r.width*r.height;
    return;
}

int main()
{
   struct Rectangle r;
   calculateArea(r);
   printf("Area=%d",*(r.area));
   return 0;
 
}

