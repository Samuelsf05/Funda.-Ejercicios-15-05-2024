//se hara un progama que diga a traves de la edad de una persona si esta es mayor o menor de edad.
#include <iostream>

 using namespace std;
 int main(){
    int edad=0; //se declara la variable para la edad.

// se le dice al usuario que se hara y se pide el ingreso del valor de la variable de su edad.
    cout <<"Veremos si udted en menor o mayor de edad. \n";
    cout <<"Ingrese su edad por favor: \n";
    cin >> edad;
//se condiciona para que la edad no pueda ser menor a 0 años.
    if(edad<0){
        cout << "Esta edad no puede ser cierta.\n";
    }
    // si la edad es menor a 18 se le dice al usuario que es menor de edad, en su defecto se e dira que es mayor de edad.
    else if (edad<18){
        cout << "Tu es menor de edad. \n";
    }
    else{
        cout << "Usted es mayor de edad. \n";
    }

    return 0;
 }