#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Qual è l'età in cui si prende la patente nel tuo paese?\n");
    scanf("%d", &a);
    printf("Quanti anni hai?\n");
    scanf("%d", &b);
   
    if(b >= a)
    {
        printf("La puoi prendere allora!\n");
    }
   
    else
    {
        printf("Mi dispiace, ritenta quando sarai più grande :(\n");
    }
    return 0;
}