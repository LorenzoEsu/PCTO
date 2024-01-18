#include <stdio.h>

    int main()
    {
        char stringa[5] = {'c','i','a','o','\0'};
        stringa[0] = 'P';
        stringa[1] = 'o';
        stringa[2] = 'z';
        stringa[3] = 'z';
        stringa[4] = 'o';
        printf("%s\n", stringa);
    return 0;
    }