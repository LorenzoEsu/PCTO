#include <stdio.h>
int main()
{
    char stringa[] = "Viandante, sei giunto nella mia taverna! Se vuoi dormire qui dovrai rispondere ad un mio quesito!";
    char quesito[] = "Quanti anni avrò mai?";
    int a;
    printf("%s\n", stringa);
    printf("%s\n", quesito);
    scanf("%d\n", &a);

    if(a == 56)
    {
        printf("M-M-a co-m-me hai fatto?! Sei forse un mago??\n");
    }

    else
    {
        printf("Beh non ti ho dato alcun indizio, quindi è normale che tu abbia sbagliato.\n");
    }

return 0;
}