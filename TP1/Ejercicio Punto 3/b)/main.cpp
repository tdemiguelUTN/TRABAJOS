#include <iostream>

using namespace std;

int main()
{
    float y,x,m1,m2,b1,b2;
    cout << "Ingrese el coeficiente de la pendiente y el valor de la ordenada al origen de la primera recta" << endl;
    cin >> m1 >> b1;
    cout << "Ingrese el coeficiente de la pendiente y el valor de la ordenada al origen de la segunda recta" << endl;
    cin >> m2 >> b2;
    if (m1 == m2 && b1!=b2)
    cout << "No hay interseccion, son rectas paralelas" << endl;
    if (m1 == m2 && b1 == b2)
    cout << "Todos los puntos son interseccion, ya que son rectas iguales" << endl;
    else {
        x = (b1-b2)/(m2-m1);
        y = m1*x + b1,
        cout << "La recta se interseca en el punto x=" << x << " y en el punto y=" << y << endl;
    }
    return 0;
}
