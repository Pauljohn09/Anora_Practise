#include<stdio.h>
#include<string.h>
enum Shape
{
    circle,
    square,
    triangle,
};
int main()
{
    int l;
    int ch;
    enum Shape s;
    printf("Enter length");
    scanf("%d",&l);
    printf("enter shape 0,1,2");
    scanf("%d",&ch);
    float area=0;
    s=ch;
   
    switch(s)
    {
        case circle:area=3.14*l*l;
        break;
        case square:area=l*l;
        break;
        case triangle:area=0.5*l*l;
        break;
    }
    printf("Area=%f",area);
    return 0;
}