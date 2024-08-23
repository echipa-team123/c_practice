#include <stdio.h>

int main() {
    int x = 10;
    int y = 3;
    int severity = 3;
    int i = 0, j = 5, k, l, m, n = 0;

    if (x > y) {
        printf("%d is greater than %d", x, y);
    } else if (x < y) {
        printf("%d is smaller than %d", x, y);
    } else {
        printf("%d is equal with %d", x, y);
    }

    printf("\n-----------\n");

    (x > y) ? printf("%d is greater than %d (ternary)\n", x, y) : printf("%d is smaller than %d", x, y);

    switch (severity) {
        case 1:
            printf("Low\n");
            break;
        case 2:
            printf("MEDIUM\n");
            break;
        case 3:
            printf("HIGH\n");
            break;
        default:
            printf("No data\n");
    }

    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    printf("---------\n");

    do {
        printf("%d\n", j);
        j--;
    } while (j > 0);

    printf("---------\n");

    for (k = 0; k < 5; k++) {
        printf("%d\n", k);
    }

    printf("---------\n");

    // Outer loop
    for (l = 1; l <= 2; ++l) {
        printf("Outer: %d\n", l);  // Executes 2 times
        
        // Inner loop
        for (m = 1; m <= 3; ++m) {
        printf(" Inner: %d\n", m);  // Executes 6 times (2 * 3)
        }
    }

    printf("---------\n");

    while (n < 10) {
        if (n == 4) {
            n++;
            continue;
        }
        printf("%d\n", n);
        n++;
    }

    return 0;
}