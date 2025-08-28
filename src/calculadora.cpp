#include <iostream>
using namespace std;

int main() {
    float num1, num2, resultado;
    char op;
    bool valido = false;

    while (!valido) {
        cout << "Ingrese la operacion en el formato: num1 operador num2\n";
        cout << "Ejemplo: 5.2 + 3.1\n";
        cin >> num1 >> op >> num2;

        // Verificar si el operador es válido
        if (op != '+' && op != '-' && op != '*' && op != '/') {
            cout << "Error: operador no valido. Use solo +, -, * o /.\n";
            continue; // vuelve a pedir la operación
        }

        // Validar división por cero
        if (op == '/' && num2 == 0) {
            do {
                cout << "No se puede dividir entre 0, ingrese un valor nuevamente: ";
                cin >> num2;
            } while (num2 == 0);
        }

        // Realizar la operación
        switch (op) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                resultado = num1 / num2;
                break;
        }

        cout << "Resultado: " << resultado << endl;
        valido = true; // operación válida y finalizada
    }

    return 0;
}
