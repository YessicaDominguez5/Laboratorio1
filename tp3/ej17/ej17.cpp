/*Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15 d�as. Por cada d�a registr�:
N�mero de d�a (entero)
Temperatura (float)
Mil�metros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se pide calcular e informar:
El n�mero de d�a que se haya registrado la temperatura m�xima.
La amplitud t�rmica de todo el per�odo.
La cantidad de d�as con neblina.
Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia. Mostrar "Quincena h�meda" si llovi� al menos un tercio de los d�as. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.*/


#include <iostream>
using namespace std;
int main()
{
    int i, dia, conneblina = 0, conlluvia = 0;
    float tempe, mili, visi, maxi = 0, mini = 0;

    for ( i=1; i<=15; i++)
    {
        cout << "dia " << i << endl;

        cout << "Ingresar temperatura: ";
        cin >> tempe;
        cout << endl << "Ingresar milimetros de lluvia: ";
        cin >> mili;
        cout << endl << "Ingresar visibilidad: ";
        cin >> visi;
        cout << endl;

        if (i == 1)
        {

            maxi = tempe;
            dia = i;
            mini = tempe;

        }
        else if( tempe > maxi )
        {
            maxi = tempe;
            dia = i;
        }
        if (tempe < mini)
        {

            mini = tempe;

        }

        if ( visi < 2)
        {
            conneblina++;
        }
        if ( mili > 0)
        {

            conlluvia++;
        }



    }



    cout << "El numero de dia que se registro la temperatura m�xima fue: " << dia << endl;
    cout << "La amplitud t�rmica de todo el per�odo fue: " << maxi - mini << endl;
    cout << "La cantidad de d�as con neblina fue: " << conneblina << endl;
    if (conlluvia < 5 )
    {
        cout << "Quincena seca" << endl;
    }
    else if (conlluvia >= 5 && conlluvia < 8)
    {
        cout << "Quincena humeda" << endl;
    }
    else
    {
        cout << "Quincena lluviosa" << endl;
    }
    return 0;
}
