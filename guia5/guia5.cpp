#include "guia5.h"

using namespace std;

Libro::Libro(string titulo, string autor, int paginas_totales) :
    _titulo(titulo), _autor(autor), _paginas_totales(paginas_totales), _pagina_actual(0)
    {/* cuerpo vacío */}

string Libro::Libro::titulo() const { return _titulo; }
string Libro::Libro::autor() const { return _autor; }
int Libro::Libro::paginas_totales() const { return _paginas_totales; }
int Libro::Libro::pagina_actual() const { return _pagina_actual; }
int Libro::Libro::porcentaje_leido() const { return 100 * _pagina_actual / _paginas_totales; }
bool Libro::Libro::finalizado() const { return _pagina_actual == _paginas_totales; }


/*
por que aca es Punto2D::x() y no Punto2D::Punto2D::x()
float Punto2D::x() const { return _x; }
float Punto2D::y() const { return _y; }
*/
void Libro::avanzar_n_paginas(int n){
    _pagina_actual += n;
    if (_pagina_actual > _paginas_totales){
        _pagina_actual = _paginas_totales;
    }
}

void Libro::saltar_a_pagina(int k){
    _pagina_actual = k;
    if (_pagina_actual > _paginas_totales){
        _pagina_actual = _paginas_totales;
    }else if (_pagina_actual < 0){
        _pagina_actual = 0;
    }
}
