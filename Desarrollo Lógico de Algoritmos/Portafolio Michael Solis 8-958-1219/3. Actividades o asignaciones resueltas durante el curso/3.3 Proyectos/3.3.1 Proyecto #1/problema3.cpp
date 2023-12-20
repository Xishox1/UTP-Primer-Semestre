/* Escriba un programa que al recibir como dato un número entero de cuatro
dígitos (Ejemplo: 6354), genere una impresión como se muestra a
continuación:
4
5
3
6 */

#include <iostream>
using namespace std;

int main(){
// Bloque de declarativas
int numero,cifra,f;
// Instrucciones
cout<<"Ingresa un numero: ";
cin>>numero;
// Condición
cifra = to_string(numero).length();
if (cifra == 4) {
    f = numero%10;
    numero = numero/10;
    cout<<f;

    f = numero%10;
    numero = numero/10;
    cout<<"\n"<<f;

    f = numero%10;
    numero = numero/10;
    cout<<"\n"<<f;

    f = numero%10;
    numero = numero/10;
    cout<<"\n"<<f;
    }
else
    cout<<"Error, introduzca un numero de 4 digitos";

cout<<"\n\n\t=== Integrantes ===";
cout<<"\n=== Maria Ibarguen - Cedula: 8-982-1997 ===";
cout<<"\n=== Eymar Marchena - Cedula: 20-14-5067 ===";
cout<<"\n=== Chin Willie    - Cedula: 8-973-698  ===";
cout<<"\n=== Miguel Pinilla - Cedula: 8-975-2460 ===";
cout<<"\n=== Michael Solis  - Cedula: 8-958-1219 ===\n";
}
