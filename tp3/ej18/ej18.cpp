/*La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registró:
Número de movimiento
Día
Tipo ('E' - Extracción / 'D' - Depósito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracción y el porcentaje de depósito.
El depósito de mayor importe indicando también día y número de movimiento.
La cantidad de movimientos del día 10.*/

#include <iostream>
using namespace std;
int main()
{
    int i, dia,condep = 0, conex = 0, maxidia, maximov, condia = 0;
    char tipo;
    float importe, acudep = 0,acuex = 0, maxi;
    for (i=1; i<=14; i++)

    {
        cout << "Ingrese el dia (del 10 al 16): ";
        cin >> dia;
        if (dia == 10)
        {
            condia++;
        }
        cout << "Numero de movimiento: " << i;
        cout << endl << "Ingrese tipo 'E' - Extraccion / 'D' - Deposito) ";
        cin >> tipo;
        tipo = toupper(tipo);
        cout << "tipo: " << tipo << endl;
        if (tipo == 'E')
        {
            conex++;
        }
        else
        {
            condep++;
        }
        cout << endl << "Ingrese el importe: ";
        cin >> importe;
        cout << endl;
        if (tipo == 'D')
        {
            acudep += importe;
        }
        else
        {
            acuex += importe;
        }


        if (tipo == 'D')
        {
            if ( i == 1)
            {
                maxi = importe;
                maxidia = dia;
                maximov = i;

            }
            else
            {
                if (importe > maxi)
                {
                    maxi = importe;
                    maxidia = dia;
                    maximov = i;
                }

            }

        }



    }

    cout << "El saldo final de la cuenta es " << acudep - acuex << endl;
    cout << "El porcentaje de extracciones es " << ((float)conex * 100)/14 << "%" << endl;
    cout << "El porcentaje de depositos es " << ((float)condep * 100)/14 << "%" << endl;
    cout << "El depósito de mayor importe fue en el dia " << maxidia << ", el movimiento nro " << maximov << " de importe $" << maxi << endl;
    cout << "El dia 10 se registraron " << condia << " movimientos." << endl;

    return 0;
}
