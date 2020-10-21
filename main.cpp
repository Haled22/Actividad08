#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Computadora c01 = Computadora("Windows",
                                "HP",12,"Intel");
    Computadora c02;
    c02.setSistemaOperativo("iOS");
    c02.setMarca("Apple");
    c02.setRam(16);
    c02.setProcesador("Intel");

    Laboratorio lb;
    
    Computadora c03;
    cin>>c03;
    lb>>c02>>c03;
    
    lb.mostrar();
    cout<<c01;


    return 0;
}