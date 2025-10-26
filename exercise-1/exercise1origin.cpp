#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Ingrese tres números enteros: ";
    cin >> num1 >> num2 >> num3;

    int suma = num1 + num2 + num3;
    double promedio = suma / 3.0;
    int producto = num1 * num2 * num3;

    int minimo = num1;
    if (num2 < minimo) minimo = num2;
    if (num3 < minimo) minimo = num3;

    int maximo = num1;
    if (num2 > maximo) maximo = num2;
    if (num3 > maximo) maximo = num3;

    cout << "La suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    cout << "El más pequeño es " << minimo << endl;
    cout << "El más grande es " << maximo << endl;

    return 0;
}
