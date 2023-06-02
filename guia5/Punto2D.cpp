#include "Punto2D.h"
#include <cmath>

using namespace std;

Punto2D::Punto2D(float x, float y) :
    _x(x), _y(y)  // lista de inicialización
    {/* cuerpo vacío */}

Punto2D Punto2D::crear_polar(float mod, float ang) {
    return Punto2D(mod * cos(ang), mod * sin(ang));
}
float Punto2D::x() const { return _x; }
float Punto2D::y() const { return _y; }

void Punto2D::espejar_y(){
    _y = -_y;
}

float Punto2D::modulo() const {
    return sqrt(x()*x() + y()*y());
}
float Punto2D::angulo() const {
    return atan2(x(), y());         
} 