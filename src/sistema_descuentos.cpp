#include <iostream> 

using namespace std; 

  

int main () { 

string cliente; 

int producto; 

float precio, descuento= 0.0; 

  

cout << "Ingrese el tipo de cliente (VIP O NORMAL):"; 

cin >> cliente; 

cout << "Ingrese cantidad del producto:"; 

cin >> producto; 

cout << "Ingrese el precio del producto:"; 

cin >> precio; 

  

       if (cliente=="VIP"){ 

        descuento=0.20; 

        cout << "El cliente es VIP y se aplica el 20% de descuento."<<endl; 

       } 

  

       else if (producto >=4) { 

        descuento=0.10; 

        cout <<"El cliente no es VIP, pero su compra de productos es mayor o igual a 4, por lo tanto tiene el 10% de descuento:"<<endl; 

       } 

  

       else { 

        cout << "No aplica descuento."<<endl; 

       } 

  

       float precioFinal = precio -(precio*descuento); 

       cout << "Precio original:"<< precio << endl; 

       cout << "Descuento aplicado:"<<(descuento*100)<< "%" <<endl; 

       cout <<"Precio final:"<< precioFinal << endl; 

  

       return 0; 

} 