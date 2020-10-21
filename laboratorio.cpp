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
    cout <<left;
    cout <<setw(19)<<"Sistema Operativo";
    cout <<setw(18)<<"Marca";
    cout <<setw(18)<<"Ram";
    cout <<setw(18)<<"Procesador";
    cout<<endl;
    for(size_t i =0; i<cont; i++){
        Computadora &c =arreglo[i];
        cout<< c;
        /* cout<<" Nombre : "<<c.getNombre()<<endl;
        cout<<" Marca : "<<c.getMarca()<<endl;
        cout<<" Ram : "<<c.getRam()<<endl;
        cout<<" Procesador : "<<c.getProcesador()<<endl;
        cout<<endl; */
    }

}