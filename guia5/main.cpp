//Compilar con el comando: g++ main.cpp Complejo.cpp -o main

#include <iostream>
#include "guia5.h"

using namespace std;

int main(){

    cout << "creando libro nuevo" << endl;
    Libro libro("El señor de los anillos", "J.R.R. Tolkien", 1000);
    cout << "titulo: " << libro.titulo() << endl;
    cout << "autor: " << libro.autor() << endl;
    cout << "paginas totales: " << libro.paginas_totales() << endl;
    cout << "pagina actual: " << libro.pagina_actual() << endl;
    cout << "leer 100 paginas" << endl;
    libro.avanzar_n_paginas(100);
    cout << "pagina actual: " << libro.pagina_actual() << endl;
    cout << "porcentaje leido: " << libro.porcentaje_leido() << endl;
    cout << "libro finalizado: " << libro.finalizado() << endl;
    cout << "leer 1000 paginas" << endl;
    libro.avanzar_n_paginas(1000);
    cout << "pagina actual: " << libro.pagina_actual() << endl;
    cout << "porcentaje leido: " << libro.porcentaje_leido() << endl;
    cout << "libro finalizado: " << libro.finalizado() << endl;
    cout << "saltar a pagina 500" << endl;
    libro.saltar_a_pagina(500);
    cout << "pagina actual: " << libro.pagina_actual() << endl;
    cout << "porcentaje leido: " << libro.porcentaje_leido() << endl;
    cout << "libro finalizado: " << libro.finalizado() << endl;

    return 0;
}