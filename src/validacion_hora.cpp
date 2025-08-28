#include <iostream> 

using namespace std; 

  

int main() { 

    string nombreTrabajador; 

    int horaEntrada, minutoEntrada; 

    int horaSalida, minutoSalida; 

  

    cout << "Ingrese su nombre: "; 

    cin >> nombreTrabajador; 

  

    cout << "Ingrese la hora de entrada (0-23): "; 

    cin >> horaEntrada; 

    cout << "Ingrese el minuto de la hora de entrada (0-59): "; 

    cin >> minutoEntrada; 

  

    cout << "Ingrese la hora de salida (0-23): "; 

    cin >> horaSalida; 

    cout << "Ingrese el minuto de la hora de salida (0-59): "; 

    cin >> minutoSalida; 

  

    if (horaEntrada < 0 || horaEntrada > 23 || horaSalida < 0 || horaSalida > 23) { 

        cout << "Error: las horas deben estar entre 0 y 23." << endl; 

        return 0; 

    } 

  

    if (minutoEntrada < 0 || minutoEntrada > 59 || minutoSalida < 0 || minutoSalida > 59) { 

        cout << "Error: los minutos deben estar entre 0 y 59." << endl; 

        return 0; 

    } 

  

    int entradaTotal = horaEntrada * 60 + minutoEntrada; 

    int salidaTotal = horaSalida * 60 + minutoSalida; 

  

    if (salidaTotal < entradaTotal) { 

        cout << "Error: la hora de salida no puede ser antes que la de entrada." << endl; 

        return 0; 

    } 

  

    int totalMinutos = salidaTotal - entradaTotal; 

    int horasTrabajadas = totalMinutos / 60; 

    int minutosTrabajados = totalMinutos % 60; 

  

    cout << "Registro exitoso para " << nombreTrabajador << endl; 

    cout << "Horas trabajadas: " << horasTrabajadas << " horas y "  

         << minutosTrabajados << " minutos." << endl; 

  

    return 0; 

} 