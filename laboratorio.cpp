#include "laboratorio.h"
#include <fstream>


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

void Laboratorio::respaldar_tabla(){
    ofstream archivo("computadoras.txt");
    if(archivo.is_open())
    {
        archivo <<left;
        archivo <<setw(19)<<"Sistema Operativo";
        archivo <<setw(18)<<"Marca";
        archivo <<setw(18)<<"Ram";
        archivo <<setw(18)<<"Procesador";
        archivo <<endl;
        for(size_t i =0; i<cont; i++){
            Computadora &c =arreglo[i];
            archivo << c;
        }
    }
    archivo.close();

}

void Laboratorio::respladar(){

    ofstream archivo("computadora2.txt");
    if(archivo.is_open())
    {
        for(size_t i=0; i<cont; i++){
            Computadora &c = arreglo[i];
            archivo << c.getSistemaOperativo()<<endl;
            archivo << c.getMarca()<<endl;
            archivo << c.getProcesador()<<endl;
            archivo << c.getRam()<<endl;
        }
    }
}

void Laboratorio::recuperar(){
    ifstream archivo("computadora2.txt");
    if(archivo.is_open()){
        string temp;
        int intTemp;
        Computadora c;
        while(true){
            getline(archivo, temp);
            c.setSistemaOperativo(temp);
            if(archivo.eof()){
                break;
            }
            getline(archivo, temp);
            c.setMarca(temp);
            getline(archivo, temp);
            c.setProcesador(temp);
            getline(archivo, temp);
            intTemp = stoi(temp);
            c.setRam(intTemp);
            agregarComputadora(c);
        }
    }
    archivo.close();
}