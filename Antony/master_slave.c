#include <stdio.h>
#include<stdbool.h>
#include<string.h>
typedef enum
{
    IDLE,
    RECEIVING,
    PROCESSING,
    TRANSMITTING
}state;
void process(void)
{
    return;
}
state Idle()
{
    char i;
    printf("----------IN IDLING MODE----------\n");
    printf("Has data been received? (Y/N)");
    scanf(" %c",&i);
    while(i != 'Y')
    {
        if(i == 'N')
        {
            printf("----------IN IDLING MODE----------\n");
            printf("Has data been received? (Y/N)");
            scanf(" %c",&i);
        }
        else
        {
            printf("Invalid input\n");
            scanf(" %c",&i);
        }
    }
        if(i=='Y')
        {
            return RECEIVING;
        }
}
state Receiving()
{
    char r;
    printf("----------IN RECEIVING MODE----------\n");
    printf("Is data being received? (Y/N)");
    scanf(" %c",&r);
    while(r != 'N')
    {
        if(r == 'Y')
        {
            printf("----------IN RECEIVING MODE----------\n");
            printf("Is data being received? (Y/N)");
            scanf(" %c",&r);
        }
        else
        {
            printf("Invalid input\n");
            scanf(" %c",&r);
        }
    }
    if(r=='N')
    {
        return PROCESSING;
    }
    
}
state Processing(char* tr)
{
    printf("----------IN PROCESSING MODE----------\n");
    process();
    printf("Set transmit value to : (HIGH/LOW)\n");
    scanf(" %s",tr);
    while(strcmp(tr,"HIGH")!=0)
    {
        if(strcmp(tr,"LOW")==0)
        {
            printf("----------IN PROCESSING MODE----------\n");
            printf("Set transmit value to : (HIGH/LOW)\n");
            scanf(" %s",tr);
        }
        else
        {
            printf("Invalid input\n");
            while(getchar()!='\n');
            scanf(" %s",tr);
        }
    }
    if(strcmp(tr,"HIGH")==0)
    {
        printf("Processing complete\n");
        return TRANSMITTING;
    }
 
}
state Transmitting(char *tr)
{
    printf("----------IN TRANSMITTING MODE----------\n");
    process();
    printf("Set transmit value to : (HIGH/LOW)\n");
    scanf(" %s",tr);
    while(strcmp(tr,"LOW")!=0)
    {
        if(strcmp(tr,"HIGH")==0)
        {
            printf("----------IN TRANSMITTING MODE----------\n");
            printf("Set transmit value to : (HIGH/LOW)\n");
            scanf(" %s",tr);
        }
        else
        {
            printf("Invalid input\n");
            scanf(" %s",tr);
        }
    }
    if(strcmp(tr,"LOW")==0)
    {
        printf("Transmitting complete\n");
        return  IDLE;
    }
 
}
int main()
{
    char transmit[4] ="LOW";
    state st=0;
    while(1)
    {
        switch(st)
        {
            case 0:
            st=Idle();
            break;
            case 1:
            st=Receiving();
            break;
            case 2:
            st=Processing(transmit);
            break;
            case 3:
            st=Transmitting(transmit);
            break;
        }
    }
    return 0;
}
