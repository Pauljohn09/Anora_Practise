#include <stdio.h>

int main(){

    int num;
    printf("Enter the numer of terms of the sequence required: ");
    scanf("%d", &num);

    int fib1, fib2;
    for(int i=0; i<num; i++){

        if(i==0){
            fib1=i;
            printf("%d ",i);}
        if(i==1){
            fib2=i;
            printf("%d ",i);}

        if(i>1){
            int temp = fib1+fib2;
            printf("%d ",temp);
            fib1 = fib2;
            fib2 = temp;}
    }

}