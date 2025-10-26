#include <iostream>
using namespace std;

int main() {
    int num1 = 0;
    cout << "Ingrese un número: ";
    cin >> num1;

    if (num1 % 2 == 0) {
        cout << num1 << " es par" << endl;
    } else {
        cout << num1 << " es impar" << endl;
    }
    return 0;
}
