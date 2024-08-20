#include<stdio.h>

int main() {
    int x, y, z, t = 10;
    while(t--) {
        x = 0;
        y = 1;
        do {
            printf("%d\n", x);
            z = x + y;
            x = y;
            y = z;
        } while(x < 255);
    }
    return 0;
}