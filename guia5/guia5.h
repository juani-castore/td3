//#ifndef COMPLEJO_H
//#define COMPLEJO_H para que es esto?
#include <string>
using namespace std;

class Libro {
public:
    // observadores
    string titulo() const;
    string autor() const;
    int paginas_totales() const;
    int pagina_actual() const;
    int porcentaje_leido() const;
    bool finalizado() const;

    // constructores

    Libro(string titulo, string autor, int paginas_totales);
    
    // modificadores
    void avanzar_n_paginas(int n);
    void saltar_a_pagina(int k);

    // otras operaciones:


private:
    string _titulo;
    string _autor;
    int _paginas_totales;
    int _pagina_actual;
};