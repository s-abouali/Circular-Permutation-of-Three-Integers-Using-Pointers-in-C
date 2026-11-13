#include <stdio.h>

// Function to perform a circular permutation
void swap(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int a, b, c;

    printf("Enter the first integer: ");
    if (scanf("%d", &a) != 1) return 1;

    printf("Enter the second integer: ");
    if (scanf("%d", &b) != 1) return 1;

    printf("Enter the third integer: ");
    if (scanf("%d", &c) != 1) return 1;

    printf("\nBefore permutation:\n");
    printf("Element 1 = %d\n", a);
    printf("Element 2 = %d\n", b);
    printf("Element 3 = %d\n", c);

    swap(&a, &b, &c);

    printf("\nAfter permutation:\n");
    printf("Element 1 = %d\n", a);
    printf("Element 2 = %d\n", b);
    printf("Element 3 = %d\n", c);

    return 0;
}
