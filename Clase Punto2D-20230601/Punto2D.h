#ifndef COMPLEJO_H
#define COMPLEJO_H

class Punto2D {
public:
    // observadores
    float x() const; // coordenada x
    float y() const; // coordenada y

    // constructores
    Punto2D(float x, float y);
    static Punto2D crear_polar(float mod, float ang); 

    // modificadores
    void espejar_y();

    // otras operaciones:
    Punto2D operator+(const Punto2D & b) const;
    float modulo() const; 
    float angulo() const;    
private:
    float _x;
    float _y;
};

#endif