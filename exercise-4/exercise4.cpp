#include <iostream>
using namespace std;

int main() {
	int num1;
    int num2;
    int num3;

	cout << "Ingrese tres números diferentes: ";
	cin >> num1 >> num2 >> num3;

    int minimo = num1;
    if (num2 < minimo) minimo = num2;
    if (num3 < minimo) minimo = num3;

    int maximo = num1;
    if (num2 > maximo) maximo = num2;
    if (num3 > maximo) maximo = num3;

    int medio;
	if (num1 != minimo && num1 != maximo) medio = num1;
	else if (num2 != minimo && num2 != maximo) medio = num2;
	else medio = num3;

	cout << "El número del medio es " << medio << endl;
	return 0;
}