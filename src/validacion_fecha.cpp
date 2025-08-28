#include <iostream>
using namespace std;

int main() {
    int dia, mes;
    cout << "Ingrese el dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese el mes de nacimiento (numero): ";
    cin >> mes;

    // Variable para guardar el signo
    string signo = "";

    // Validaciones con condiciones en una sola línea
    if ((mes == 1 && dia >= 1 && dia <= 19)) signo = "Capricornio";
    else if ((mes == 1 && dia >= 20 && dia <= 31)) signo = "Acuario";
    else if ((mes == 2 && dia >= 1 && dia <= 18)) signo = "Acuario";
    else if ((mes == 2 && dia >= 19 && dia <= 29)) signo = "Piscis";
    else if ((mes == 3 && dia >= 1 && dia <= 20)) signo = "Piscis";
    else if ((mes == 3 && dia >= 21 && dia <= 31)) signo = "Aries";
    else if ((mes == 4 && dia >= 1 && dia <= 19)) signo = "Aries";
    else if ((mes == 4 && dia >= 20 && dia <= 30)) signo = "Tauro";
    else if ((mes == 5 && dia >= 1 && dia <= 20)) signo = "Tauro";
    else if ((mes == 5 && dia >= 21 && dia <= 31)) signo = "Geminis";
    else if ((mes == 6 && dia >= 1 && dia <= 20)) signo = "Geminis";
    else if ((mes == 6 && dia >= 21 && dia <= 30)) signo = "Cancer";
    else if ((mes == 7 && dia >= 1 && dia <= 22)) signo = "Cancer";
    else if ((mes == 7 && dia >= 23 && dia <= 31)) signo = "Leo";
    else if ((mes == 8 && dia >= 1 && dia <= 22)) signo = "Leo";
    else if ((mes == 8 && dia >= 23 && dia <= 31)) signo = "Virgo";
    else if ((mes == 9 && dia >= 1 && dia <= 22)) signo = "Virgo";
    else if ((mes == 9 && dia >= 23 && dia <= 30)) signo = "Libra";
    else if ((mes == 10 && dia >= 1 && dia <= 22)) signo = "Libra";
    else if ((mes == 10 && dia >= 23 && dia <= 31)) signo = "Escorpio";
    else if ((mes == 11 && dia >= 1 && dia <= 21)) signo = "Escorpio";
    else if ((mes == 11 && dia >= 22 && dia <= 30)) signo = "Sagitario";
    else if ((mes == 12 && dia >= 1 && dia <= 21)) signo = "Sagitario";
    else if ((mes == 12 && dia >= 22 && dia <= 31)) signo = "Capricornio";
    else signo = "No ingresó los datos correctamente";

    cout << "Su signo zodiacal es: " << signo << endl;

    return 0;
}
