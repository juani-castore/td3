//Compilar con el comando: g++ main.cpp Complejo.cpp -o main

#include <iostream>
#include "Punto2D.h"

using namespace std;

int main(){

    cout << "-- c --" << endl;
    Punto2D c = Punto2D(1.7, 8.3);
    cout << "Coordenada x: " << c.x() << endl;
    cout << "Coordenada y: " << c.y() << endl;
    cout << "Espejando y..." << endl;
    c.espejar_y();
    cout << "Coordenada x: " << c.x() << endl;
    cout << "Coordenada y: " << c.y() << endl;

    cout << "-- c2 --" << endl;
    Punto2D c2 = Punto2D::crear_polar(1, 3.14);
    cout << "Coordenada x: " << c2.x() << endl;
    cout << "Coordenada y: " << c2.y() << endl;

    return 0;
}