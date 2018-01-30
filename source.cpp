#include <iostream>
#include <array>

using namespace std;

int main() {

	array<int, 100> arreglo;

	int valor_buscar = 0;
	int pivote_central = 0;
	int inicio = 0;
	int final = arreglo.size();
	int opc = 0;

	//Llenando Arreglo
	for (int i = 0; i < arreglo.size(); i++)
	{
		arreglo[i] = i + 1;
	}

	cout << "Inserte un numero del 1 al 100 para buscar su posicion: ";
		cin >> valor_buscar;

		cout << "Elija que tipo de busqueda desea emplear" << endl << "1. Busqueda Secuencial" << endl << "2. Busqueda Binaria"
			<< endl << "Su opcion (1 o 2): ";
		cin >> opc;

		switch (opc) {
			case 1: //Busqueda Secuencial
				for (int x = 0; x < arreglo.size(); x++)
				{
					if (arreglo[x] == valor_buscar) {
						cout << "El valor " << valor_buscar << " se encuentra en la posicion " << x + 1<< endl;
						break;
					}
				}
				break;

			case 2: //Busqueda Binaria
				while (inicio < final) {

					pivote_central = (inicio + final) / 2;

					if (valor_buscar == arreglo[pivote_central]) {
						cout << "\nEl valor " << valor_buscar << " ha sido encontrado en la posicion " << pivote_central + 1 << endl;
						break;
					}

					else if (valor_buscar < pivote_central) {
						final = pivote_central - 1;
					}

					else if (valor_buscar > pivote_central) {
						inicio = pivote_central + 1;
					}
				}
				break;
		}

	system("pause");

}
