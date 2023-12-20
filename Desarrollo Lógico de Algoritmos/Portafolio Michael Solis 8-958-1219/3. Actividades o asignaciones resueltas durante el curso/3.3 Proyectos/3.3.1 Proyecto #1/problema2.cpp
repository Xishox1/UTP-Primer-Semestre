#include <iostream>
using namespace std;

int main(){
// Bloque de declarativas
string nombre, mensaje;
float nota1,nota2,nota3,nota_final;
// Bloque de instrucciones
cout<<"Ingresa el nombre: ";
getline(cin,nombre);
cout<<"Ingresa la primera nota: ";
cin>>nota1;
cout<<"Ingresa la segunda nota: ";
cin>>nota2;
cout<<"Ingresa la tercera nota: ";
cin>>nota3;
nota_final = (nota1*0.20) + (nota2*0.30) + (nota3*0.50);
// Condición
if ((nota_final >= 0) && (nota_final <=100)) {
    if (nota_final >= 61)
	mensaje = "El estudiante "+nombre+" aprobo\n";
else
	mensaje = "El estudiante "+nombre+" reprobo\n";

cout<<"La nota final es: "<<nota_final<<endl;
cout<<mensaje;
} else
cout<<"Error las notas deben ser entre un rango de 0 a 100, por favor vuelva a introducir las notas en el rango indicado";

cout<<"\n\n\t=== Integrantes ===";
cout<<"\n=== Maria Ibarguen - Cedula: 8-982-1997 ===";
cout<<"\n=== Eymar Marchena - Cedula: 20-14-5067 ===";
cout<<"\n=== Chin Willie    - Cedula: 8-973-698  ===";
cout<<"\n=== Miguel Pinilla - Cedula: 8-975-2460 ===";
cout<<"\n=== Michael Solis  - Cedula: 8-958-1219 ===\n";
}
