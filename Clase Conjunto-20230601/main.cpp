#include <iostream>
#include <string>
#include "Conjunto.h"

using namespace std;

int main(){

    cout << "----- Conjunto de enteros -----" << endl;
    
    Conjunto<int> conj;
    
    cout << "cardinal: " << conj.cardinal() << endl;
    cout << "Agregando elementos..." << endl;
    
    conj.agregar(2);
    conj.agregar(7);
    conj.agregar(2);
    
    cout << "cardinal: " << conj.cardinal() << endl;
    cout << "Pertenecen? " << endl;
    
    cout << "2: " << conj.pertenece(2) << endl;
    cout << "3: " << conj.pertenece(3) << endl;
    cout << "4: " << conj.pertenece(4) << endl;
    cout << "7: " << conj.pertenece(7) << endl;
    
    cout << endl;
    cout << endl;
    
    cout << "----- Conjunto de strings -----" << endl;

    Conjunto<string> conj_str;
    cout << "Agregando elementos..." << endl;
    
    conj_str.agregar("bajo");
    conj_str.agregar("bateria");
    conj_str.agregar("guitarra");
    
    cout << "cardinal: " << conj_str.cardinal() << endl;
    
    cout << "Pertenecen? " << endl;
    cout << "bajo: " << conj_str.pertenece("bajo") << endl;
    cout << "teclado: " << conj_str.pertenece("teclado") << endl;
    cout << "bateria: " << conj_str.pertenece("bateria") << endl;
    cout << "guitarra: " << conj_str.pertenece("guitarra") << endl;
    
    return 0;
}