#include<stdio.h>
#include<math.h>

int main() {
    char str[8];
    printf("Enter an 8-bit integer (in binary): ");
    gets(str);
    int ans = 0;
    for(int i=7; i>=0; i--) {
        printf("%c - ", str[i]);
        ans += (int)ceil(pow((str[i] == '0') ? 0: 2, 7-i));
        printf("%d\n", ans);
    }
    printf("In decimal: %d\n", ans);
    return 0;
}