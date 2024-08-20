#include<stdio.h>
#include <unistd.h>
enum states
{
    idle,
    receiving,
    process,
    transmit,
};




int toreceive(char rec)
{
    if(rec=='y')
    {
        printf("Receiving process started");
        return 1;
    }
    else
    {
        printf("Remaining in idle condition\n");
        
        return 0;
    }
}

void manage(enum states m)
{
switch(m)
{
case idle:{
        char rec;
        
        printf("In idle condition\n");
        printf("Press y to receive data or n to remain in idle condition");
        while ((getchar()) != '\n'); 
        scanf("%c",&rec);
        enum states x=toreceive(rec);
        manage(x);
}
}
}



int main()
{

enum states m;
int n;
printf("Enter mode");
scanf("%d",&n);
m=n;
manage(m);


}