#include <iostream>
using namespace std;

int main() {
    // Declarar variable pinCorrecto como ejemplo para que funcione el programa
    const int pinCorrecto = 1234;

    int pin, opcion;

    cout << "Ingrese su pin: ";
    cin >> pin;

    // Comparar con el pin correcto
    if (pin == pinCorrecto) {
        // Salida "Ingreso exitoso."
        cout << "Ingreso exitoso." << endl;

        cout << "--- Menú ---" << endl;
        cout << "¿Qué desea hacer?" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar" << endl;

        cin >> opcion;

        if (opcion == 1) {
            // Salida Saldo 
            cout << "Su saldo es: $1.000.000 " << endl;
        }
        else if (opcion == 2) {
            // Salida enseña el saldo y da la opción para retirar
            cout << "Su saldo es: $1.000.000 " << endl;
            cout << "¿Cuánto desea retirar?" << endl;
            cout << "Retirando..." << endl;
            cout << "Gracias por usar nuestros servicios." << endl;
        }
        else if (opcion > 2 || opcion < 1) {
            cout << "Ingrese una opción válida." << endl;
        }
        else {
            // Salida Saldo
            cout << "Su saldo es $1.000.000 " << endl;
            cout << "Gracias por usar nuestros servicios." << endl;
        }
    }
    else {
        // primer intento
        cout << "Pin incorrecto. Tiene 2 intentos más." << endl;
        cin >> pin;

        if (pin == pinCorrecto) {
            cout << "Ingreso exitoso." << endl;
        }
        else {
            cout << "Pin incorrecto. Tiene 1 intento." << endl;
            cin >> pin;

            if (pin == pinCorrecto) {
                cout << "Ingreso exitoso." << endl;
            }
            else {
                // tercer intento
                cout << "Pin incorrecto. Por favor, comuníquese con su banco." << endl;
            }
        }
    }

    return 0;
}
