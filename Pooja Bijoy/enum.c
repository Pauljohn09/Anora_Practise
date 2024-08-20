#include<stdio.h>
enum TemperatureGrade
{
    hot=4,
    warm=3,
    cool=2,
    cold=1,
};

enum TemperatureGrade temp(int t)
{
   enum TemperatureGrade t1;
   if(t>=50 )
   {
     t1=hot;
   }
   else if(t>=20 && t<50)
   {
    t1=warm;
   }
   else if(t>=0 && t<20)
   {
    t1=cool;
   }
   else 
   {
    t1=cold;
   }
   return t1;
}

int main()
{
    int t2;
    int t;
    printf("Enter temperature");
    scanf("%d",&t);
    t2=temp(t);
    printf("temp=%d",t2);
}