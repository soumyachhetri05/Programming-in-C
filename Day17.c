#include <stdio.h>
int main() {
    int n, original, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;
    while(n != 0) {
        digit = n % 10;

        sum = sum + digit * digit * digit;
        n /= 10;

    }
    if(sum == original)
        printf("Armstrong number\n");
       
        else
            printf("Not an Armstrong number\n");

            return 0;
}

