#include <stdio.h>

int main()
{
	int tam;
	int tamano;
	int arreglo[tam][tamano];
	int arreglo2[tam][tamano];
	int arreglo3[tam][tamano];
	int contador;
	int contador2;
	int contador3;
	int datos;
	int datos2;
	printf("Numero de filas\n");
        scanf("%d", &tam);
        printf("Numero de columnas\n");
        scanf("%d", &tamano);

	if(tam == tamano){
		printf("Introduce tus datos de la primera matriz\n");
		for(contador = 0; contador < tam; contador++){
			for(contador2=0; contador2 < tam; contador2++){
				scanf("%d ", &datos);
				arreglo[contador][contador2]= datos;
			}
		}
		printf("Introduce los datos de la segunda matriz\n");
		for(contador = 0; contador < tam; contador++){
                	for(contador2=0; contador2 < tam; contador2++){
				scanf("%d ", &datos2);
                        	arreglo2[contador][contador2]= datos2;
                	}	
		}
       		printf("Las Matrices son: \n\n");
    		for(contador = 0; contador < tam; contador++){
        		printf("\n");
			printf("[");
        		for(contador2 = 0; contador2 < tam; contador2++){        				printf("%d ", arreglo[contador][contador2]);
        		}
        		printf("]");
    		}
    		printf("\n\n");
    		for(contador = 0; contador < tam; contador++){
        		printf("\n");
        		printf("[");
        		for(contador2 = 0; contador2 < tam; contador2++){
            			printf("%d ", arreglo2[contador][contador2]);
        		}
        		printf("]");
    		}
    		printf("\n\nMultiplicacion de Matrices: \n\n");
    		for(contador = 0; contador < tam; contador++){
        		for(contador2 = 0; contador2 < tam; contador2++){
				arreglo3[contador][contador2]=0;
				for(contador3=0; contador3 < tam; contador3++){        					arreglo3[contador][contador2] = arreglo3[contador][contador2] + arreglo[contador][contador3] * arreglo2[contador3][contador2];
				}
        		}
    		}
    		for(contador = 0; contador < tam; contador++){
        		printf("\n");
        		printf("[");
        		for(contador2 = 0; contador2 < tam; contador2++){
				printf("%d,", arreglo3[contador][contador2]);
			}
        		printf("]");
    		}
		printf("\n");
	}
	else
	printf("Las Matrices No Se Pueden Multiplicar\n");
return 0;
}
