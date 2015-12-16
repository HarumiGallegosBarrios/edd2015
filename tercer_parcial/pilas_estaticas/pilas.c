#include <stdio.h>

int main()
{
    int numero[7];
    int valor;
    int i,j;

    printf("Introduce el numero:\n");
    scanf("%d", &valor);
    numero[0] = valor;
    for(i=1; i<7; i++){
        scanf("%d", &valor);
        numero[i]= valor;
    }
    for(j=0; j<7; j++){
        printf("La Pila es: ");
        printf("%d\n", numero[j]);
    }
}
