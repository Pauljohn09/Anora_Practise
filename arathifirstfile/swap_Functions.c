#include<stdio.h>
void func1(){
    printf("first function");
}
void func2(){
    printf("second function");
}
void swap(void (**p1)(),void (**p2)()){
    int (*temp)() = (*p1);
    *p1=*p2;
    *p2=*temp;
}
void main(){
    void (*ptr1)()=func1;
    void (*ptr2)()=func2;
    printf("the ptr1 points to the :");
    ptr1();
    printf("\n\nthe ptr2 points to the :");
    ptr2();
    printf("\n\n");
    swap(&ptr1,&ptr2);
    printf("now the ptr1 points to the :");
    ptr1();
    printf("\n\nnow the ptr2 points to the :");
    ptr2();
   

}