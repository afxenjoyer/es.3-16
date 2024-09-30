#include <stdio.h>

int main(void)
{
    int numero1;
    int numero2;
    int numero3;

    printf("Digita il primo numero\n");
    scanf("%d", &numero1);
    printf("Digita il secondo numero\n");
    scanf("%d", &numero2);
    printf("Digita il terzo numero\n");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {
        printf("Il primo numero è il maggiore");
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        printf("Il secondo numero è il maggiore");
    }
    else if (numero3 > numero1 && numero3 > numero2)
    {
        printf("Il terzo numero è il maggiore");
    }

    return 0;
}
