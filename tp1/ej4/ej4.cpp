/*Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avi�n y la cantidad de pasajes ocupados
y luego calcular e informar el porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.*/

#include <iostream>
using namespace std;
int main () {
int asoc, asdis, tot;
float poc, pdis;
cout << " Ingrese la cantidad de ascientos ocupados: ";
cin >> asoc;
cout << endl;
cout << " Ingrese la cantidad de ascientos disponibles: ";
cin >> asdis;
cout << endl;
tot = asoc + asdis;
poc = (asoc * 100)/(float)tot;
pdis = (asdis * 100)/(float)tot;
cout << "El porcentaje de ocupacion es: " << poc << "%" << endl << endl;
cout << "El porcentaje de disponibilidad es: " << pdis << "%" << endl ;
    return 0;
}
