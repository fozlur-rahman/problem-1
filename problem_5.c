#include <stdio.h>
int main()
{

    int tk;
    scanf("%d", &tk);

    if (tk >= 10000)
    {
        printf("Gucci Bags \n");
        if (tk >= 20000)
        {
            printf("Gucci Belt");
        }
    }
    else if (tk >= 5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    }

    return 0;
}