#include <iostream>
#include <float.h>"
using namespace std;

int main()
{   float kmh, mts;
    cout << "Ingrese una velocidad en km/h:" << endl;
    cin >> kmh;
    mts = kmh/3.6;
    cout << "La velocidad en mts/seg es:" << mts << endl;
    return 0;
}
