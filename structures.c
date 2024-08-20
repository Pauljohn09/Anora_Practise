#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Person
{
    char name[100];
    int age;
    char gender;
    float height;
    float weight;
};

int main()
{
    struct Person p[5];
    for(int i=0;i<2;i++)
    {
        printf("Enter name");
        scanf("%s",&p[i].name);
        printf("Enter age");
        scanf("%d",&p[i].age);
        printf("Enter gender");
        scanf("%s",&p[i].gender);
        printf("Enter height");
        scanf("%f",&p[i].height);
        printf("Enter weight");
        scanf("%f",&p[i].weight);

    }
}
