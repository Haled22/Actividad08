#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Computadora c01 = Computadora("Pavillion",
                                "HP",12,"Intel");
    Computadora c02;
    c02.setNombre("Mac");
    c02.setMarca("Apple");
    c02.setRam(16);
    c02.setProcesador("Intel");

    Laboratorio lb;
    lb.agregarComputadora(c01);
    lb.agregarComputadora(c02);

    lb.mostrar();


    return 0;
}