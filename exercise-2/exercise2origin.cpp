#include <iostream>
using namespace std;

int main() {
	int num1 = 0;
    int num2 = 0;

	cout << "Ingrese dos enteros: ";
	cin >> num1 >> num2;

	if (num1 % num2 == 0) {
		cout << num1 << " es un múltiplo de " << num2 << endl;
	} else {
		cout << num1 << " no es un múltiplo de " << num2 << endl;
	}

	return 0;
}