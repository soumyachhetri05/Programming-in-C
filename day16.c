#include <stdio.h>
int main() {
    int n, remainder;
    long long binary = 0, base = 1;

    printf("Enter a decimal number: \n");
    scanf("%d", &n);

    while(n > 0) {
        remainder = n % 2;
        binary = binary + remainder * base;
        n = n / 2;
        base = base * 10;

    }
    printf("Binary: %lld\n", binary);
    return 0;
}