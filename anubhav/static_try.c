#include<stdio.h>

int fun(int n) {
    n++;
    return n;
}

int main() {
    int n = 10;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fun(n);
    return 0;
}