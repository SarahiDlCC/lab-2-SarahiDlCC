#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "Introduzca un número entero de cinco dígitos: ";
    cin >> num;

    int absnum = num < 0 ? -num : num;

    int num1 = absnum / 10000;           
    int num2 = (absnum / 1000) % 10;     
    int num3 = (absnum / 100) % 10;      
    int num4 = (absnum / 10) % 10;       
    int num5 = absnum % 10;              

    cout << "Dígitos separados: ";
    cout << num1 << "   " << num2 << "   " << num3 << "   " << num4 << "   " << num5 << endl;

    return 0;
}