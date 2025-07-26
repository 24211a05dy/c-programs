#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping a=%d\tb=%d\n", a, b);
    // logic begins
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a=%d\tb=%d\n", a, b);
    return 0;
}
