/*Hacer un programa para ingresar por teclado una cantidad de minutos
y mostrar por pantalla a cu�ntos d�as, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrar� por pantalla que equivalen a 1 d�a, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrar� por pantalla que equivalen a 0 d�a, 8 horas y 0 minutos.
(1 d�a tiene 1440 minutos)*/

#include <iostream>
using namespace std;

int main () {
int min, dia,hora,resm;
cout << "Ingrese los minutos ";
cin >> min;
cout << endl;
dia = min/1440;
hora = (min - (dia * 1440))/60;
resm = (min -(dia*1440))- (hora*60);
cout << min << " minutos equivale/n a " << dia << " dia/s, " << hora << " hora/s y " << resm << " minutos ";

return 0;
}
