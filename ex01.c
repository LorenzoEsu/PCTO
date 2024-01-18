#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("inserisci un numero:\n");
    scanf("%d %d", &a, &b);
    printf("a: %d\nb: %d\n", a,b);

    if (a > b)
    {
        printf("a è maggiore di b");
    }
    else if (a == b)
    {
        printf("b è uguale ad a");
    }
    else 
    {
        printf("b è maggiore di a");

    }
    return 0;
}