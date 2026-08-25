#include <stdio.h>
int main() {
    int days, fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine\n");

    } else if (days <= 5) {
        fine = days * 5;
        printf("Fine: %d\n", fine);

    } else if (days <= 10) {
        fine = days * 10;
        printf("Fine: %d\n", fine);

    } else if ((days <= 30)) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine: %d\n", fine);

    } else {
        printf("Membership cancelled\n");

    }
    return 0;
    }

