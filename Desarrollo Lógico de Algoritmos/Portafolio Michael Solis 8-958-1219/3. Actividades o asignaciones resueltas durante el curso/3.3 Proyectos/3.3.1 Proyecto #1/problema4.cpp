#include <iostream>
using namespace std;

int main()
{
// Bloque de declarativas
    float radio,generatriz,altura,ab,area_lateral,area_tot,vol;
// Instrucciones y bloque de entrada
    cout<<"Ingresa el radio: ";
    cin>>radio;
    cout<<"Ingresa la generatriz: ";
    cin>>generatriz;
    cout<<"Ingresa la altura del cono: ";
    cin>>altura;
// Condición, se determina si alguno de los valores de entrada posee signo negativo.
    if((radio < 0) || (generatriz < 0) || (altura < 0))
// En caso de que los valores de entrada tengan signo negativo. se ejecuta este codigo.
        cout<<"Error, datos de entrada con valor negativo.";
    else {
// Si los valores ingresados son positivos, se ejecuta el siguiente bloque de codigo.
// Operación, bloque de proceso.
        ab = 3.14*radio*radio;
        area_lateral = 3.14*radio*generatriz;
        area_tot = ab*altura;
        vol = (0.333)*ab*altura;
// Imprimir datos, bloque de salida.
        cout<<"El area de la base es: "<<ab<<endl;
        cout<<"El area lateral es: "<<area_lateral<<endl;
        cout<<"El area total es: "<<area_tot<<endl;
        cout<<"Su volumen es: "<<vol<<endl;
        }
// Integrantes del grupo
    cout<<"\n\n\t=== Integrantes ===";
    cout<<"\n=== Maria Ibarguen - Cedula: 8-982-1997 ===";
    cout<<"\n=== Eymar Marchena - Cedula: 20-14-5067 ===";
    cout<<"\n=== Chin Willie    - Cedula: 8-973-698  ===";
    cout<<"\n=== Miguel Pinilla - Cedula: 8-975-2460 ===";
    cout<<"\n=== Mich	ael Solis  - Cedula: 8-958-1219 ===\n";

}
