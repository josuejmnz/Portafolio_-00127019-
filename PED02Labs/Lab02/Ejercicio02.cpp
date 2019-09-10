#include <iostream>
using namespace std;

void colors(int numb, char* desde, char* hasta);
void tower(int a, char* desde, char* auxiliar, char* hasta);

int main() {

	int counter = 0;
	int n;

	cout << "Torre de Hanoi" << endl;
	cout << "Ingrese el numero de discos: ";
	cin >> n;
	cout << "endl";
	tower(n, "Nuevo", "Auxiliar", "Final");

	return 0;
}

void colors(int numb, char* desde, char* hasta) {

	char* array[] = { "", "Azul", "Verde", "Amarillo", "Naranja", "Rojo" };

	cout << "\t\tStep " << ++counter;

	cout << ": Movimiento " << array[numb] << " de " << desde << " a " << hasta << "\n";
}

void tower(int a, char* desde, char* auxiliar, char* hasta) {
	if (a == 1) {
		colors(1, desde, hasta);
	}
	else {
		tower(a - 1, desde, hasta, auxiliar);
		colors(a, desde, hasta);
		tower(a - 1, auxiliar, desde, hasta);
	}
}
