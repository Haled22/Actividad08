#include "computadora.h"

Computadora::Computadora()
{
    
}

Computadora::Computadora(const string &nombre,
                        const string &marca,
                        int ram, const string &procesador)
{
    this->nombre = nombre;
    this->marca = marca;
    this->ram =ram;
    this->procesador = procesador;
}

void Computadora::setNombre(const string &c)
{
    nombre = c;
}
string Computadora::getNombre()
{
    return nombre;
}
void Computadora::setMarca(const string &c)
{
    marca = c;
}
string Computadora::getMarca()
{
    return marca;
}
void Computadora::setRam(int c)
{
    ram = c;
}
int Computadora::getRam()
{
    return ram;
}
void Computadora::setProcesador(const string &c)
{
    procesador = c;
}
string Computadora::getProcesador()
{
    return procesador;
}