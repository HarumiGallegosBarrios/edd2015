#include <iostream>
using namespace std;

int main()
{
	int tam;
	int tamano;
	cout << "Numero de filas\n";
	cin >> tam;
	cout << "Numero de columnas\n";
	cin >> tamano;
        int arreglo[tam][tamano];
        int arreglo2[tam][tamano];
        int arreglo3[tam][tamano];
        int contador;
        int contador2;
        int contador3;
        int datos;
        int datos2;

	if(tam == tamano){
        	cout << "Introduce tus datos de la primera matriz"<<endl;
        	for(contador = 0; contador < tam; contador++){
                	for(contador2=0; contador2 < tam; contador2++){
                        	cin >> datos;
                        	arreglo[contador][contador2]= datos;
                	}
        	}
		cout << "Introduce los datos de la segunda matriz"<<endl;
        	for(contador = 0; contador < tam; contador++){
                	for(contador2=0; contador2 < tam; contador2++){
                        	cin >> datos2;
                        	arreglo2[contador][contador2]= datos2;
                	}
        	}
        	cout << "Las Matrices son: "<<endl;
        	for(contador = 0; contador < tam; contador++){
                	cout <<endl;
                	cout << "[";
                	for(contador2 = 0; contador2 < tam; contador2++){
                        	cout << arreglo[contador][contador2];
                	}
                	cout << "]";
        	}
        	cout <<endl;
        	for(contador = 0; contador < tam; contador++){
                	cout <<endl;
                	cout << "[";
                	for(contador2 = 0; contador2 < tam; contador2++){
                        	cout << arreglo2[contador][contador2];
                	}
                	cout << "]";
        	}
        	cout <<endl << "Multiplicacion de Matrices: "<<endl;
        	for(contador = 0; contador < tam; contador++){
                	for(contador2 = 0; contador2 < tam; contador2++){
                        	arreglo3[contador][contador2]=0;
                        	for(contador3=0; contador3 < tam; contador3++){
                                	arreglo3[contador][contador2] = arreglo3[contador][contador2] + arreglo[contador][contador3] * arreglo2[contador3][contador2];
                        	}
                	}
        	}
		for(contador = 0; contador < tam; contador++){
                	cout <<endl;
                	cout << "[";
                	for(contador2 = 0; contador2 < tam; contador2++){
                        	cout << arreglo3[contador][contador2];
                	}
        		cout << "]";
        	}
        	cout <<endl;
	}
	else
	cout << "La Matriz No Se Puede Multiplicar"<<endl;
return 0;
}
