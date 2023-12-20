#include <iostream>
using namespace std;

int main(){
// Bloque de declarativas
float F,x,sumar,restar;
// Instrucciones
cout<<"\tPrograma para calcular 28 grados centigrados\n";
cout<<"Ingresa el grado Fahrenheit que permite ajustar el termostato: ";
cin>>F;
x = (F-32) * 5/9;
//Condición
if (F == float(82.4)) {
	cout<<"El resultado en grados centigrados es: "<<x<<endl;
	cout<<"***Programa finalizado***";
}
else if (F < float(82.4)){
sumar = 82.4 - F;
cout<<"El resultado de la operacion es: "<<x<<" grados centigrados"<<endl;
cout<<"El grado ingresado es bajo, por favor sumele al grado que acaba de ingresar "<<sumar<<" para ajustar el termostato";
}
else if(F > float(82.4)){
restar = F - 82.4;
cout<<"El resultado de la operacion es: "<<x<<" grados centigrados"<<endl;
cout<<"El grado ingresado es alto, por favor restele al grado que acaba de ingresar "<<restar<<" para ajustar el termostato";
}

cout<<"\n\n\t=== Integrantes ===";
cout<<"\n=== Maria Ibarguen - Cedula: 8-982-1997 ===";
cout<<"\n=== Eymar Marchena - Cedula: 20-14-5067 ===";
cout<<"\n=== Chin Willie    - Cedula: 8-973-698  ===";
cout<<"\n=== Miguel Pinilla - Cedula: 8-975-2460 ===";
cout<<"\n=== Michael Solis  - Cedula: 8-958-1219 ===\n";
}

