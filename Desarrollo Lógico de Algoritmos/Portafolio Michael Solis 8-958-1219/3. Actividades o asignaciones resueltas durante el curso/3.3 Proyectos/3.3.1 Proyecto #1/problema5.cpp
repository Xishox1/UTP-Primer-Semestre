/* El promedio de parciales de un curso se calcula en base a los cuatro parciales
calificados de los cuales se elimina la nota menor y se promedian las tres notas más
altas. Escriba un algoritmo que determine la nota eliminada, el promedio obtenido
e indique la nota (letra) obtenida por el estudiante. Imprima dichos valores.
*/

#include <iostream>
using namespace std;

int main(){
// Bloque de declarativas
float parc1,parc2,parc3,parc4,prom,menor;
string mensaje;
// Bloque de instrucciones
cout<<"Ingresa la nota del primer parcial: ";
cin>>parc1;
cout<<"Ingresa la nota del segundo parcial: ";
cin>>parc2;
cout<<"Ingresa la nota del tercer parcial: ";
cin>>parc3;
cout<<"Ingresa la nota del cuarto parcial: ";
cin>>parc4;
//Condición
if ((parc1 >= 0) && (parc1 <=100) && (parc2>=0) && (parc2 <=100)&& (parc3 >=0) && (parc3 <=100) && (parc4 >= 0) && (parc4 <= 100)){

    if((parc1 < parc2) && (parc1 < parc3) && (parc1 < parc4)){
        menor = parc1;
        prom = (parc2+parc3+parc4)/3;
    }else if ((parc2 < parc1) && (parc2 < parc3) && (parc2 < parc4)){
        menor = parc2;
        prom =(parc1+parc3+parc4)/3;
    } else if ((parc3 < parc1) && (parc3 < parc2) && (parc3 < parc4)){
        menor = parc3;
        prom =(parc1+parc2+parc4)/3;
    } else if ((parc4 < parc1) && (parc4 < parc2) && (parc4 < parc3)){
        menor = parc4;
        prom =(parc1+parc3+parc2)/3;
    }

    if(prom <61)
    mensaje = "F";
    else if (prom < 71)
    mensaje = "D";
    else if (prom < 81)
    mensaje = "C";
    else if (prom < 91)
    mensaje = "B";
    else if (prom <= 100)
    mensaje = "A";

cout<<"La nota eliminada es: "<<menor<<"\n";
cout<<"El promedio obtenido es: "<<prom<<endl;
cout<<"La nota obtenida por el estudiante (letra) es: "<<mensaje;

} else
cout<<"Error, por favor introduce notas del parcial en el rango de 0 a 100";

cout<<"\n\n\t=== Integrantes ===";
cout<<"\n=== Maria Ibarguen - Cedula: 8-982-1997 ===";
cout<<"\n=== Eymar Marchena - Cedula: 20-14-5067 ===";
cout<<"\n=== Chin Willie    - Cedula: 8-973-698  ===";
cout<<"\n=== Miguel Pinilla - Cedula: 8-975-2460 ===";
cout<<"\n=== Michael Solis  - Cedula: 8-958-1219 ===\n";
}
