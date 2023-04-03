#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int sumation = a + b;
    printf("%d\n", sumation);

    // scanf("%d %d", &a, &b);
    int substration = a - b;
    printf("%d\n", substration);

    // scanf("%d %d", &a, &b);
    int multi = a * b;
    printf("%d\n", multi);

    // scanf("%d %d", &a, &b);
    float divi = a * 1.0 / b;
    printf("%.2f", divi);
    return 0;
}