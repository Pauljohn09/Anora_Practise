#include<stdio.h>

int fibo(int n) {
    if(n<=1)
        return n;
    return fibo(n-1) + fibo(n-2);
}

int add(int a) {
    return a + 1;
}

int main() {
    int (*operations[])(int) = {fibo, add};
    printf("%d\n", operations[1](operations[0](5)));
    return 0;
}