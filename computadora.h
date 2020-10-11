#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora{
private: 
    string nombre;
    string marca;
    int ram;
    string procesador;
public:
    Computadora();
    Computadora(const string &nombre,
                const string &marca,
                int ram,
                const string &procesador
                );
    void setNombre(const string &c);
    string getNombre();
    void setMarca(const string &c);
    string getMarca();
    void setRam(int c);
    int getRam();
    void setProcesador(const string &c);
    string getProcesador();

    
    

};


#endif