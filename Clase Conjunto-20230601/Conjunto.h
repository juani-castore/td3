#ifndef CONJUNTO_H
#define CONJUNTO_H

#include<vector>

template <typename T>
class Conjunto {
public:
    // observadores
    bool pertenece(const T& elem) const;

    // modificadores
    void unir_con(const Conjunto& c);
    void intersecar_con(const Conjunto& c);
    void agregar(const T& elem);
    void quitar(const T& elem);

    // otras operaciones
    int cardinal() const;
private:
    std::vector<T> _elementos;
};

template <typename T>
bool Conjunto<T>::pertenece(const T& e) const {
    return _elementos.end() != std::find(_elementos.begin(), _elementos.end(),e);
}

template <typename T>
void Conjunto<T>::agregar(const T& e) {
    if (!pertenece(e))
        _elementos.push_back(e);
}

template <typename T>
void Conjunto<T>::quitar(const T& e) {
    if (pertenece(e)) { // Lo pongo al final y quito el último
        std::swap(std::find(_elementos.begin(), _elementos.end(), e), _elementos.end()-1);
        _elementos.pop_back();
    }
}

template <typename T>
void Conjunto<T>::unir_con(const Conjunto<T>& c) {
    for (const T& e: c._elementos){
        if (!pertenece(e))
            _elementos.push_back(e);
    }
}
template <typename T>
void Conjunto<T>::intersecar_con(const Conjunto<T>& c) {
    for (const T& e: _elementos){
        if (!c.pertenece(e))
            quitar(e);
    }
}
template <typename T>
int Conjunto<T>::cardinal() const{
    return _elementos.size();
}


#endif