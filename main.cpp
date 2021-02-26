/*
Autor: Aldo Ruiz
*/
#include <iostream>
#include<stdlib.h>
#include <cstring>

using std :: cout;
using std :: cin;
using std :: endl;

#define _CANTEST 2 //Defino una constante 

typedef char str10[10];//Variables de tipo char para los nombres, apellidos y carrera de cada estudiante
typedef char str15[20];
typedef char str20[30];

struct tRegEstudiante{ //Registro de un estudante
  str10 nombre;
  str15 apellido;
  str20 carrera;

}; 

typedef tRegEstudiante tVecEst[_CANTEST];//Array de registros

//Prototipos
void inicializarVecEst(tVecEst, int);
void ingresarEst(tVecEst, int);
void mostrarEst(tVecEst, int);

//Funcion principal
int main() {

  tVecEst v;
  int cant;
  cant = _CANTEST;

  inicializarVecEst(v,cant);
  ingresarEst(v,cant);
  mostrarEst(v, cant);

}

//Funciones y procedimientos
void inicializarVecEst(tVecEst v, int cant){
  for(int i = 0; i < cant; i++){
    strcpy(v[i].nombre, "");
    strcpy(v[i].apellido, "");
    strcpy(v[i].carrera, "");
  }
}
void ingresarEst(tVecEst v, int cant){
  cout<<"Ingrese estudiante"<<endl;
  cout<<"=================="<<endl;
  
  for(int i = 0; i < cant; i++){
    cout<<"Nombre: ";
    cin.getline(v[i].nombre,sizeof(v[i].nombre),'\n');
    cout<<"Apellido: ";
    cin.getline(v[i].apellido,sizeof(v[i].apellido),'\n');
    cout<<"Carrera: ";
    cin.getline(v[i].carrera,sizeof(v[i].carrera),'\n');
    cout<<"----------------------------"<<endl;
  }
}
void mostrarEst(tVecEst v , int cant){
  cout<<"========================================"<<endl;
  cout<<"   NOMBRE   "<<"  APELLIDO   "<<"  CARRERA  "<<endl;
  cout<<"========================================"<<endl;
  for(int j = 0; j < _CANTEST; j++ ){
  cout<<"\t"<<v[j].nombre<<"\t\t"<<v[j].apellido<<"\t\t"<<v[j].carrera<<endl;
  }
}