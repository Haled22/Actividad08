#include "laboratorio.h"

Laboratorio::Laboratorio(){
    cont=0;
}

void Laboratorio::agregarComputadora(const Computadora &c)
{
    if(cont<5){
        arreglo[cont]= c;
        cont++; 
    }
    else
    {
        cout<<" Arreglo lleno."<<endl;
    }
    

}
void Laboratorio::mostrar()
{
    for(size_t i =0; i<cont; i++){
        Computadora &c =arreglo[i];
        cout<<" Nombre : "<<c.getNombre()<<endl;
        cout<<" Marca : "<<c.getMarca()<<endl;
        cout<<" Ram : "<<c.getRam()<<endl;
        cout<<" Procesador : "<<c.getProcesador()<<endl;
        cout<<endl;
    }

}